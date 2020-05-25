CC=g++
CFLAGS=-Wall -std=c++17
LDFLAGS=
SOURCES= main.cpp pentagon.cpp trapeze.cpp trapeze.h pentagon.cpp pentagon.h rhombus.cpp rhombus.h factory.cpp factory.h processor.cpp processor.h figure.h point.cpp point.h subscriber.cpp subscriber.h
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=lab8

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@
