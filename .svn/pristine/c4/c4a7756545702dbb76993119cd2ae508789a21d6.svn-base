CC=g++
CFLAGS = -Wall -Werror

all: hashtable

hashtable: main.o hashtable.o linked_list.o
	$(CC) $(CFLAGS) ./bin/main.o ./bin/hashtable.o ./bin/linked_list.o -o ./bin/hashtable
main.o: ./src/main.cpp
	$(CC) $(CFLAGS) -c ./src/main.cpp -o ./bin/main.o

hashtable.o: ./src/hashtable.cpp ./src/hashtable.h
	$(CC) $(CFLAGS) -c ./src/hashtable.cpp -o ./bin/hashtable.o
linked_list.o: ./src/linked_list.cpp ./src/linked_list.h
	$(CC) $(CFLAGS) -c ./src/linked_list.cpp -o ./bin/linked_list.o

clean:
	rm -rf *.o bot

valgrind:
	 valgrind --leak-check=yes --show-reachable=yes ./bin/hashtable

