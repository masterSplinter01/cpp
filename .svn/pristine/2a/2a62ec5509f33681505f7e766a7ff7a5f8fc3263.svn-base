CC=g++
CFLAGS = -Wall -Werror

all: matrixalloc

matrixalloc: main.o arr_mem.o
	$(CC) $(CFLAGS) main.o arr_mem.o -o matrixalloc

main.o: ./src/main.cpp
	$(CC) $(CFLAGS) -c ./src/main.cpp

arr_mem.o: ./src/arr_mem.cpp ./src/arr_mem.h
	$(CC) $(CFLAGS) -c ./src/arr_mem.cpp

clean:
	rm -rf *.o

valgrind:
	 valgrind --leak-check=yes --show-reachable=yes ./matrixalloc

