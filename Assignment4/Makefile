CC=g++
CFLAGS=-c -Wall
LDFLAGS=
SOURCES=main.cpp gun_type.cpp shooter.cpp transformer.cpp sniper.cpp bazookron.cpp medic.cpp voice.cpp tests.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=tests

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@
clean:
	rm -rf *.o $(EXECUTABLE)
	rm -rf *.orig