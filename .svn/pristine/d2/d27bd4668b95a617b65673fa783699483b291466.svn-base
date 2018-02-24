CC=g++
CFLAGS = -Wall -Werror

all: hello

hello: main.o hello.o
	$(CC) $(CFLAGS)  main.o hello.o -o hello

main.o: ./src/main.cpp
	$(CC) $(CFLAGS) -c ./src/main.cpp
	
hello.o: ./src/hello.cpp ./src/hello.h
	$(CC) $(CFLAGS) -c ./src/hello.cpp
	
clean:
	rm -f *.o

.PHONY: clean all
