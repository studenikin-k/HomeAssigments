CC=g++
CFLAGS= -Werror -Wpedantic -Wall -std=c++17
LDFLAGS= -lgtest -lgtest_main -lpthread
SOURCES=gun_type.cpp shooter.cpp transformer.cpp sniper.cpp voice.cpp tests.cpp
EXECUTABLE=tests

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(SOURCES) $(CFLAGS) $(LDFLAGS) $(OBJECTS) -o $@

clean:
	rm -rf *.o $(EXECUTABLE)
	rm -rf *.orig