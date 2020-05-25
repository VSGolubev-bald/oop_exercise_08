CC = g++
FLAGS = -std=c++11 -Wall
FILES = *.cpp
PROG = run

all:
	$(CC) $(FLAGS) -o $(PROG) $(FILES)

clean:
	rm -f *.o run
