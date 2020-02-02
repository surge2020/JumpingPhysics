CC = g++
CFLAGS = -Wall -g -lSDL2
all:
	$(CC) $(CFLAGS) -o run ./src/*.cpp
clean:
	rm run