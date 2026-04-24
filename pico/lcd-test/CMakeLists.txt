#
# Project:      lcd-test
#
# Desription:   Test of HD44780 type lcd.
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
project(lcd-test 
    VERSION 1.0
    DESCRIPTION "Test of HD44780 type lcd."
    LANGUAGES C CXX ASM
)

# Set target board
set(PICO_BOARD pico)  # alt. pico, pico_w, pico2, pico2_w

# Initialize SDK (must be BEFORE using its functions)
pico_sdk_init()

add_executable(lcd-test 
    src/main.c
    src/lcd.c
)

target_link_libraries(lcd-test 
    pico_stdlib
#    pico_multicore
#    pico_bootrom
#    pico_sync
#    pico_unique_id
#    pico_sha256
#    hardware_gpio
#    hardware_pio
#    hardware_adc
#    hardware_i2c
#    hardware_uart
#    hardware_spi    
#    hardware_clocks
#    hardware_pwm
#    hardware_rtc
#    hardware_flash
#    hardware_dma
#    hardware_sync
#    hardware_irq
#    hardware_resets
#    hardware_interp
#    boot_uf2_headers
#    tinyusb_host
#    tinyusb_device
#    tinyusb_board
)

# These MUST come AFTER pico_sdk_init()
pico_enable_stdio_usb(lcd-test 1)
pico_enable_stdio_uart(lcd-test 0)

pico_add_extra_outputs(lcd-test)


# 
# Custom targets for programming etc.
#

# ---- Tools ----
set(PICOTOOL picotool)
set(OPENOCD openocd)

# ---- OpenOCD config ----
set(OPENOCD_INTERFACE interface/cmsis-dap.cfg)   
set(OPENOCD_TARGET target/rp2040.cfg)

set(UF2_FILE ${CMAKE_CURRENT_BINARY_DIR}/lcd-test.uf2)
set(ELF_FILE ${CMAKE_CURRENT_BINARY_DIR}/lcd-test.elf)


add_custom_target(flash
    DEPENDS lcd-test
    COMMAND picotool load -f ${UF2_FILE}
    COMMAND picotool reboot
    COMMENT "Flashing ${UF2_FILE}"
)

add_custom_target(flash_swd
    DEPENDS lcd-test
    COMMAND ${OPENOCD}
        -f ${OPENOCD_INTERFACE}
        -f ${OPENOCD_TARGET}
        -c "adapter speed 5000"
        -c "program ${ELF_FILE} verify reset exit"
    COMMENT "Flashing via OpenOCD (SWD)"
)

add_custom_target(flash_usb
    DEPENDS lcd-test
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
    DEPENDS lcd-test
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