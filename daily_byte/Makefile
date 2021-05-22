CC=gcc
CXX=g++
CFLAGS=-I$(IDIR) -std=gnu99 -Wall -O2 -lrt -g
RM=rm -f
MAKEFLAGS+=--silent

SRC_FILES=$(wildcard *.cpp)
DEPS==$(wildcard *.h)
OBJ_FILES=$(patsubst %.cpp,%.o,$(SRC_FILES))
EXEC_FILES=$(patsubst %.cpp,%,$(SRC_FILES))

LIBS=-lm

all: $(EXEC_FILES)

%: %.o
	$(CXX) -o $@ $^ $(CFLAGS) $(LIBS)

%.o: %.cpp $(DEPS)
	$(CXX) -c -o $@ $< $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
	$(RM) $(OBJ_FILES) *~ $(IDIR)/*~ $(EXEC_FILES)
