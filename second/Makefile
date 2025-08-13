# Target to build the final executable
all: main

# Link object files to create executable
main: main.o rectangle.o
	gcc -o main main.o rectangle.o

# Compile main.c into main.o
main.o: main.c rectangle.h
	gcc -c main.c

# Compile rectangle.c into rectangle.o
rectangle.o: rectangle.c rectangle.h
	gcc -c rectangle.c

# Clean up build files
clean:
	rm -f *.o main
