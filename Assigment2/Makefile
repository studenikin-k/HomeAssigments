all: main
main.o: main.cpp assignments.h
	g++ -c main.cpp
assignments.o: assignments.cpp assignments.h
	g++ -c assignments.cpp
main: main.o assignments.o
	g++ -Wall -o main main.o assignments.o
clean:
	rm -f main *.o
	rm -f output_file.bin