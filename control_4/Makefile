CC=g++
CFLAGS = -Wall -Werror

all: deque

deque: main.o 
	$(CC) $(CFLAGS) ./bin/main.o -o ./bin/deque
main.o: ./src/main.cpp
	$(CC) $(CFLAGS) -c ./src/main.cpp -o ./bin/main.o

clean:
	rm -rf *.o deque

valgrind:
	 valgrind --leak-check=yes --show-reachable=yes ./bin/deque

