section .data
		;여기에 데이터를 넣는 곳 입니다.
msg db "hellow world",0x0A
		;헬로월드라는 단어와 새줄 이라는 16진수 코드
section .text

global _start

_start
mov eax,4	;write의 시스템 콜 번호
mov ebx,1	;write의 표준 출력은 1번입니다
mov ecx,msg	;write의 두 번째 인자에 메세지 주소 저장
mov edx,12	;write의 세 번째 인자에 문자열 길이 저장
int 0x80	;실행

mov eax,1	;exit의 시스템 콜 번호
mov ebx,0	;exit의 정상적인 종료
int 0x80	;실행
