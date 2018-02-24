CC=g++
CFLAGS = -Wall -Werror

all: address

address: main.o address.o
	$(CC) $(CFLAGS)  main.o address.o -o address

main.o: ./src/main.cpp
	$(CC) $(CFLAGS) -c ./src/main.cpp
	
address.o: ./src/address.cpp ./src/address.h
	$(CC) $(CFLAGS) -c ./src/address.cpp
	

clean:
	rm -rf *.o

valgrind:
	 valgrind --leak-check=yes --show-reachable=yes ./address

