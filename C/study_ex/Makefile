TARGET=one
OBJECTS=one.o two.o


${TARGET} : ${OBJECTS}
	gcc -o ${TARGET} ${OBJECTS}

one.o : one.c
	gcc -c one.c
two.o : two.c
	gcc -c two.c

