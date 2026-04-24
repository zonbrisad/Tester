/*
    Linkscript for RP2040 runing directly in RAM
 */


ENTRY(_reset)

/*
    In MEMORY physical memory is defined.
*/
MEMORY {
    FLASH (rx)  : ORIGIN = 0x10000000, LENGTH = 2M
    RAM   (rwx) : ORIGIN = 0x20000000, LENGTH = 264k
}

/*
    In SECTIONS program sections are maped into memory.
*/
SECTIONS {
    . = ORIGIN(RAM);

    /* Vector table in RAM */
    .vectors :
    {
        KEEP(*(.vectors))
    } > RAM

    /* Code */
    .text : {
        _stext = .;
        *(.vectors)
        *(.entry)
        *(.text*)
        *(.rodata*)
        _etext = .;
    } > RAM

    /* Initialized data in RAM */
    .data : {
        _sdata = .;
        *(.data*)
        _edata = .;
    } > RAM

    /* Uninitialized data in RAM (zeroed) */
    .bss : {
        _sbss = .;
        *(.bss*)
        *(COMMON)
        _ebss = .;
    } > RAM

    /* Heap (grows upward)  */
    .heap (NOLOAD) : {
        . = ALIGN(8);
        _heap_start = .;
        . = . + 16k;   
        _heap_end = .;
    } > RAM

    /* Stack (grows downward) */
    .stack (NOLOAD) : {
        . = ALIGN(8);
        _stack_top = ORIGIN(RAM) + LENGTH(RAM);
        _stack_limit = _stack_top - 4k;        
    } > RAM
}


/*
    Descriptions:

    (.text)       → Code
    (.rodata)     → Constants
    (.data)       → Initialized variables
    (.bss)        → Zeroed variables
    (.vectors)    → interrupt vector table
    (.entry)      → startup code
    NOLOAD        → not stored in the binary file
    ALIGN(8)      → ensure 8-byte alignment (important for ARM)
    _stack_top    → symbol marks the top of the stack (The stack grows downward)
 */