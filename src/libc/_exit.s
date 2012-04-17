

.text
.globl ___libexword_exit
.type ___libexword_exit, @function
___libexword_exit:
	mov.l @(0x10, pc), r1
	mov.l @(0x12, pc), r2
	mov.l @r1, r0
	lds   r0, pr
        mov.l @r2, r15
	mov   r4, r0
	rts
	nop
.align 2
.long 0x74000024
.long 0x74000028
.size ___libexword_exit, .-___libexword_exit

