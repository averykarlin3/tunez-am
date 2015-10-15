a.out: list.o main.o
	gcc list.o main.o

list.o: list.c
	gcc -c list.c

main.o: main.c 
	gcc -c main.c