CC=g++
CFLAGS = -Wall -Werror
all: stream

stream: main.o my_ostream.o
	$(CC) $(CFLAGS) ./bin/main.o ./bin/my_ostream.o -o ./bin/stream
main.o: ./src/main.cpp
	$(CC) $(CFLAGS) -c ./src/main.cpp -o ./bin/main.o
my_ostream.o: ./src/my_ostream.cpp ./src/my_ostream.h
	$(CC) $(CFLAGS) -c ./src/my_ostream.cpp -o ./bin/my_ostream.o


clean:
	rm -rf *.o stream

valgrind:
	 valgrind --leak-check=yes --show-reachable=yes ./bin/stream

