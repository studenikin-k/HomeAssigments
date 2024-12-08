CC=g++
CFLAGS=-c -Wall
LDFLAGS=
SOURCES=main.cpp gun_type.cpp shooter.cpp transformer.cpp sniper.cpp bazookron.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=main

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@
clean:
	rm -rf *.o $(EXECUTABLE)
	rm -rf *.orig