CC=g++
CFLAGS = -Wall -Werror

all: add

add: main.o add.o
	$(CC) $(CFLAGS)  main.o add.o -o add

main.o: ./src/main.cpp
	$(CC) $(CFLAGS) -c ./src/main.cpp
	
add.o: ./src/add.cpp ./src/add.h
	$(CC) $(CFLAGS) -c ./src/add.cpp
	
clean:
	rm -f *.o

.PHONY: clean all
