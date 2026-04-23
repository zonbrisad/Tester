#
# Project:      hello_world
#
# Desription:   A simple hello world example over USB.
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


project(hello_world C CXX ASM)


# Initialize SDK (must be BEFORE using its functions)
pico_sdk_init()

add_executable(hello_world
    src/main.c
)

target_link_libraries(hello_world pico_stdlib)

# These MUST come AFTER pico_sdk_init()
pico_enable_stdio_usb(hello_world 1)
pico_enable_stdio_uart(hello_world 0)

pico_add_extra_outputs(hello_world)


# 
# Custom targets for programming etc.
#

# ---- Tools ----
set(PICOTOOL picotool)
set(OPENOCD openocd)

# ---- OpenOCD config ----
set(OPENOCD_INTERFACE interface/cmsis-dap.cfg)   
set(OPENOCD_TARGET target/rp2040.cfg)

set(UF2_FILE ${CMAKE_CURRENT_BINARY_DIR}/hello_world.uf2)
set(ELF_FILE ${CMAKE_CURRENT_BINARY_DIR}/hello_world.elf)


add_custom_target(flash
    DEPENDS hello_world
    COMMAND picotool load -f ${UF2_FILE}
    COMMAND picotool reboot
    COMMENT "Flashing ${UF2_FILE}"
)

add_custom_target(flash_swd
    DEPENDS hello_world
    COMMAND ${OPENOCD}
        -f ${OPENOCD_INTERFACE}
        -f ${OPENOCD_TARGET}
        -c "adapter speed 5000"
        -c "program ${ELF_FILE} verify reset exit"
    COMMENT "Flashing via OpenOCD (SWD)"
)

add_custom_target(flash_usb
    DEPENDS hello_world
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
    DEPENDS hello_world
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