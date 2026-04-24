.section .vectors, "ax"
.global _vectors
_vectors:
    .word 0x20042000          // Initial stack pointer (top of SRAM)
		.word _reset              // Reset handler
				
.section .text
.global _reset
.thumb_func
_reset:
    bl main                   // Call main()
		b .                       // Infinite loop if main returns
