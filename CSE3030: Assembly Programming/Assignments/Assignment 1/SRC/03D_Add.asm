TITLE Add and Subtract (16-bit.asm)
INCLUDE Irvine16.inc
.data
  var1	WORD 1000h
  sum	WORD 0
.code
  main PROC
   mov	ax,@data
   mov  ds,ax
   mov  ax,var1	  ; AX = 1000h
   add  ax,4000h  ; AX = 5000h
   sub  ax,2000h  ; AX = 3000h
   mov    sum, ax
   call DumpRegs
   exit
main ENDP
END main  