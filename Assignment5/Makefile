CC=g++
CFLAGS= -Werror -Wpedantic -Wall -std=c++17
LDFLAGS= -lgtest -lgtest_main -lpthread
SOURCES=gun_type.cpp shooter.cpp transformer.cpp sniper.cpp medic.cpp bazookron.cpp voice.cpp tests.cpp
EXECUTABLE=tests

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(SOURCES) $(CFLAGS) $(LDFLAGS) $(OBJECTS) -o $@

format:
	astyle -A1 -s4 *.cpp *.h
	rm -rf *.orig


.PHONY: clean

clean:
	rm -rf $(EXECUTABLE)
