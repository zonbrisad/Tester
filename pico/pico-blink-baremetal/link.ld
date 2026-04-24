MEMORY
{
	FLASH (rx) : ORIGIN = 0x10000000, LENGTH = 2M
	RAM   (rwx): ORIGIN = 0x20040000, LENGTH = 256K
}

ENTRY(_reset)

SECTIONS
{
    .vectors : {
		 KEEP(*(.vectors))
	} > FLASH
		
	.text : {
		*(.text*)
		*(.rodata*)
	} > FLASH

    .data : {
		*(.data*)
	} > RAM AT > FLASH

    .bss : {
		*(.bss*)
	} > RAM
}

