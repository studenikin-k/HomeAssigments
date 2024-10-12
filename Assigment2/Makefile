all: main
main.o: main.cpp assignment2a.h
	g++ -c main.cpp
assignment2a.o: assignment2a.cpp assignment2a.h
	g++ -c assignment2a.cpp
assignment2b.0:assignment2b.cpp assignment2b.h
	g++ -c assignment2b.cpp
main: main.o assignment2a.o assignment2b.o
	g++ -Wall -o main main.o assignment2a.o assignment2b.o
clean:
	rm -f main *.o
	rm -f output_file.bin