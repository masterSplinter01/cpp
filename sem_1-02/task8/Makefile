GPP=g++
GCC=gcc
CFLAGS = -Wall -Werror 
all: sum 

sum: main.o sum.o
	$(GPP) $(CFLAGS) main.o sum.o -o sum

main.o: ./src/main.cpp
	$(GPP) $(CFLAGS) -c ./src/main.cpp

sum.o: ./src/sum.c
	$(GCC) -c ./src/sum.clean

clean:
	rm -rf *.o