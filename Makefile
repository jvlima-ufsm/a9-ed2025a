
CC = gcc
CXX = g++
CFLAGS = -Wall -g -O2
CXXFLAGS = -Wall -g -O2
LDFLAGS = -lm
PROGS = a.out

all: $(PROGS)

a.out: grafo.o  catch_amalgamated.o testes.o
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

testes.o: testes.cpp grafo.h catch_amalgamated.hpp
catch_amalgamated.o: catch_amalgamated.cpp catch_amalgamated.hpp
grafo.o: grafo.c grafo.h

clean:
	rm -f *.o a.out
