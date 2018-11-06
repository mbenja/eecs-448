#	Author: Benjamin Streit

LAB6: main.o TestSuite.o
	g++ -g -Wall -std=c++11 main.o LinkedListOfInts.o TestSuite.o -o LAB6

main.o: main.cpp
	g++ -g -Wall -std=c++11 -c main.cpp

TestSuite.o: TestSuite.h LinkedListOfInts.h
	g++ -g -Wall -std=c++11 -c TestSuite.cpp

clean:
	rm main.o TestSuite.o *.*~ LAB6
