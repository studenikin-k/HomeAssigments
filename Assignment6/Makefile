CC=g++
CFLAGS=-Werror -Wpedantic -Wall -std=c++17
LDFLAGS=
SOURCES=template_class.cpp positive_checker.cpp
HEADERS=template_class.h
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=template

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(OBJECTS) $(CFLAGS) $(LDFLAGS) -o $@

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@


dependencies: $(SOURCES) $(HEADERS)
	$(CC) -MM $(SOURCES) > dependencies.mk

-include dependencies.mk

format:
	astyle -A1 -s4 *.cpp *.h
	rm -rf *.orig

.PHONY: clean

clean:
	rm -rf $(EXECUTABLE) $(OBJECTS) *.mk
