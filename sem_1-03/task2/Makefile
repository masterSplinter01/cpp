CC=g++
CFLAGS = -Wall -Werror

all: fib

fib: main.o fib.o
	$(CC) $(CFLAGS)  main.o fib.o -o fib

main.o: ./src/main.cpp
	$(CC) $(CFLAGS) -c ./src/main.cpp
	
fib.o: ./src/fib.cpp ./src/fib.h
	$(CC) $(CFLAGS) -c ./src/fib.cpp
	

clean:
	rm -rf *.o fib

valgrind:
	 valgrind --leak-check=yes --show-reachable=yes ./fib

