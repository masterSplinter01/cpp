CC=g++
CFLAGS = -Wall -Werror

all: concat

concat: main.o concat.o
	$(CC) $(CFLAGS)  main.o concat.o -o concat

main.o: ./src/main.cpp
	$(CC) $(CFLAGS) -c ./src/main.cpp
	
concat.o: ./src/concat.cpp ./src/concat.h
	$(CC) $(CFLAGS) -c ./src/concat.cpp
	

clean:
	rm -rf *.o concat

valgrind:
	 valgrind --leak-check=yes --show-reachable=yes ./concat

