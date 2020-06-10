%.o:
	gcc -O -c src/code$$(printf "%03d" $*).c -o code.o 

common.o:
	gcc -O -c src/common/common.c

%: %.o common.o
	gcc common.o code.o -o euler -lm
	./euler
