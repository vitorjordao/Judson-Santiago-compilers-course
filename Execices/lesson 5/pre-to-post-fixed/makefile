# compiler 
CPP=g++
ARGS=-c -g -std=c++17

# dependencies
all: postfix

postfix: pretopostfix.o parser.o
	$(CPP) pretopostfix.o parser.o -o pretopostfix

postfix.o: pretopostfix.cpp parser.h 
	$(CPP) $(ARGS) pretopostfix.cpp

parser.o: parser.cpp parser.h
	$(CPP) $(ARGS) parser.cpp

clean:
	rm pretopostfix pretopostfix.o parser.o
