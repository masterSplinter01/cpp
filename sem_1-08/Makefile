CC=g++
CFLAGS = -Wall -Werror

all: lazy

lazy: main.o lazy_string.o shared_buffer.o
	$(CC) $(CFLAGS) ./bin/main.o ./bin/lazy_string.o ./bin/shared_buffer.o -o ./bin/lazy
main.o: ./src/main.cpp
	$(CC) $(CFLAGS) -c ./src/main.cpp -o ./bin/main.o
lazy_string.o: ./src/lazy_string.cpp ./src/lazy_string.h
	$(CC) $(CFLAGS) -c ./src/lazy_string.cpp -o ./bin/lazy_string.o
shared_buffer.o: ./src/shared_buffer.cpp ./src/shared_buffer.h
	$(CC) $(CFLAGS) -c ./src/shared_buffer.cpp -o ./bin/shared_buffer.o

clean:
	rm -rf *.o lazy

valgrind:
	 valgrind --leak-check=yes --show-reachable=yes ./bin/lazy

