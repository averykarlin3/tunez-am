list: list.o main.o
	gcc list.o main.o -o list

list.o: list.c
	gcc -c list.c

main.o: main.c 
	gcc -c main.c

run:
	./list
