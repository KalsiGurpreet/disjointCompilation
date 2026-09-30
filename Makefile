final: main.o factorialCFile.o
	gcc main.o factorialCFile.o -o final
program.o: main.c
	gcc -c main.c
factorialCFile.o: factorialCFile.c factorial.h
	gcc -c factorialCFile.c


