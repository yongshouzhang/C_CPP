OBJS=creatcode.o creattree.o myselect.o
CC=gcc
huffman:${OBJS}
	${CC} -o huffman ${OBJS} main.c
creatcode.o:creatcode.c all.h
	${CC} -o creatcode.o -c creatcode.c 
creattree.o:creattree.c all.h
	${CC} -o creattree.o -c creattree.c 
myselect.o:select.c all.h
	${CC} -o myselect.o -c select.c 
	
clean:
	rm -r *.o
