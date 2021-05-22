CC=gcc
CXX=g++
CFLAGS=-I$(IDIR) -std=gnu99 -Wall -O2 -lrt -g
RM=rm -f
MAKEFLAGS+=--silent

DEPS=list.h
LIBS=-lm

%.o: %.cpp $(DEPS)
	$(CXX) -c -o $@ $< $(CFLAGS)

list: list.o main.o
	$(CXX) -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
	$(RM) *.o *~ $(IDIR)/*~ list
