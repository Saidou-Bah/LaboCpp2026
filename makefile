test1: Test1.cpp Event.o
	g++ -Wall Test1.cpp Event.o -o test1

Event.o: Event.cpp Event.h
	g++ -Wall Event.cpp -c

clean:
	rm *.o test1