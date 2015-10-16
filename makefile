library: list.o main.o library.o
	gcc list.o library.o main.o -o library

list.o: list.c
	gcc -c list.c

library.o: library.c
	gcc -c library.c

main.o: main.c 
	gcc -c main.c

run:
	./list
