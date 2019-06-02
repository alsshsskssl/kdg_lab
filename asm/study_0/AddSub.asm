TITLE Add and Subtract	 (AddSub.asm)
;This program adds and subtracts 32-bit integers.

INCLUDE Irvine32.inc	;
.code			;이렇게 세줄이 C언어에서 처음 시작할 때 샵인클루드 보이드 메인 같은 부분인가보다!
main PROC		;
	mov	eax,10000h	;EAX = 10000h
	add	eax,40000h	;EAX = 50000h
	sub	eax,20000h	;EAX = 30000h
	
	exit
main ENDP
