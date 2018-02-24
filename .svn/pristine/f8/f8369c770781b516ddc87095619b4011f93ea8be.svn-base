CC=g++
CFLAGS = -Wall -Werror

all: rational

rational: main.o rational.o 
	$(CC) $(CFLAGS) ./bin/main.o ./bin/rational.o  -o ./bin/rational
main.o: ./src/main.cpp
	$(CC) $(CFLAGS) -c ./src/main.cpp -o ./bin/main.o
rational.o: ./src/rational.cpp ./src/rational.h
	$(CC) $(CFLAGS) -c ./src/rational.cpp -o ./bin/rational.o

clean:
	rm -rf *.o rational

valgrind:
	 valgrind --leak-check=yes --show-reachable=yes ./bin/rational

