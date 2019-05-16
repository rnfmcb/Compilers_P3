output:	main.o scanner.o parser.o testTree.o
	g++ -std=c++0x -Wall main.o scanner.o parser.o stack.o -o statSem 

main.o: main.cpp
	g++ -c main.cpp

scanner.o: scanner.cpp  scanner.h
	g++ -c scanner.cpp
parser.o: parser.cpp parser.h
	g++ -c parser.cpp 
testTree.o: stack.cpp stack.h 
	g++ -c stack.cpp

clean:
	rm *.o statSem 
