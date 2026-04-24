#
# Project:      blink-timer
#
# Desription:   Example showing how to use a timer to blink LED.
#    
# Author:       Peter Malmberg <peter.malmberg@gmail.com>
# Date:         
# License:      MIT
# Organisation: ACME
# 
# CPU:  
#
#

cmake_minimum_required(VERSION 3.20)

# Import Pico SDK (must be BEFORE project)
if (DEFINED ENV{PICO_SDK_PATH})
    set(PICO_SDK_PATH $ENV{PICO_SDK_PATH})
else()
    message(FATAL_ERROR "PICO_SDK_PATH not set")
endif()

include(${PICO_SDK_PATH}/external/pico_sdk_import.cmake)

# Main project
project(blink-timer C CXX ASM
)
# project(blink-timer 
#     LANGUAGES C CXX ASM
#     VERSION 1.0
#     DESCRIPTION Example showing how to use a timer to blink LED.
# )

# Set target board
set(PICO_BOARD pico)  # alt. pico, pico_w, pico2, pico2_w

# Initialize SDK (must be BEFORE using its functions)
pico_sdk_init()

add_executable(blink-timer 
    src/main.c
)

target_link_libraries(blink-timer 
    pico_stdlib
#    hardware_gpio
#    hardware_i2c    
)

# These MUST come AFTER pico_sdk_init()
pico_enable_stdio_uart(blink-timer 0)
pico_enable_stdio_usb(blink-timer 1)

pico_add_extra_outputs(blink-timer)


# 
# Custom targets for programming etc.
#

# ---- Tools ----
set(PICOTOOL picotool)
set(OPENOCD openocd)

# ---- OpenOCD config ----
set(OPENOCD_INTERFACE interface/cmsis-dap.cfg)   
set(OPENOCD_TARGET target/rp2040.cfg)

set(UF2_FILE ${CMAKE_CURRENT_BINARY_DIR}/blink-timer.uf2)
set(ELF_FILE ${CMAKE_CURRENT_BINARY_DIR}/blink-timer.elf)


add_custom_target(flash
    DEPENDS blink-timer
    COMMAND picotool load -f ${UF2_FILE}
    COMMAND picotool reboot
    COMMENT "Flashing ${UF2_FILE}"
)

add_custom_target(flash_swd
    DEPENDS blink-timer
    COMMAND ${OPENOCD}
        -f ${OPENOCD_INTERFACE}
        -f ${OPENOCD_TARGET}
        -c "adapter speed 5000"
        -c "program ${ELF_FILE} verify reset exit"
    COMMENT "Flashing via OpenOCD (SWD)"
)

add_custom_target(flash_usb
    DEPENDS blink-timer
    COMMAND ${CMAKE_COMMAND} -E copy
        ${UF2_FILE}
        /media/$ENV{USER}/RPI-RP2
    COMMENT "Flashing direct via USB" 
)

add_custom_target(reboot
    COMMAND picotool reboot
    COMMENT "Rebooting Pico via USB"
)

add_custom_target(debug_server
    COMMAND ${OPENOCD}
        -f ${OPENOCD_INTERFACE}
        -f ${OPENOCD_TARGET}
    COMMENT "Starting OpenOCD GDB server"
)


add_custom_target(debug
    DEPENDS blink-timer
    COMMAND arm-none-eabi-gdb ${ELF_FILE}
        -ex "target remote localhost:3333"
        -ex "monitor reset init"
    COMMENT "Starting GDB and connecting to OpenOCD"
)


add_custom_target(ihelp
    COMMAND ${CMAKE_COMMAND} -E echo "flash        - Flash via picotool"
    COMMAND ${CMAKE_COMMAND} -E echo "flash_usb    - Flash via USB drive"
    COMMAND ${CMAKE_COMMAND} -E echo "flash_swd    - Flash via debugprobe/swd and openocd"
    COMMAND ${CMAKE_COMMAND} -E echo "reboot       - Reboot target"
    COMMAND ${CMAKE_COMMAND} -E echo "debug_server - Starting OpenOCD GDB server"
    COMMAND ${CMAKE_COMMAND} -E echo "debug        - Starting GDB and connecting to OpenOCD"
)