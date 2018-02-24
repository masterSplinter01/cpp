CC=g++
CFLAGS = -Wall -Werror

all: add

add: main.o a.o add.o
	$(CC) $(CFLAGS)  main.o a.o add.o -o a

main.o: ./src/main.cpp
	$(CC) $(CFLAGS) -c ./src/main.cpp

add.o: ./src/add.cpp ./src/add.h
	$(CC) $(CFLAGS) -c  ./src/add.cpp 
a.o: ./src/a.cpp ./src/a.h
	$(CC) $(CFLAGS) -c ./src/a.cpp 

