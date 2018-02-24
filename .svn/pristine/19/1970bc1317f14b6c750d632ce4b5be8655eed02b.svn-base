CC=g++
CFLAGS = -Wall -Werror

all: matrixalloc

matrixalloc: main.o bot_functions.o
	$(CC) $(CFLAGS) main.o bot_functions.o -o bot
main.o: ./src/main.cpp
	$(CC) $(CFLAGS) -c ./src/main.cpp

bot_functions.o: ./src/bot_functions.cpp ./src/bot_functions.h
	$(CC) $(CFLAGS) -c ./src/bot_functions.cpp

clean:
	rm -rf *.o bot

valgrind:
	 valgrind --leak-check=yes --show-reachable=yes ./bot

