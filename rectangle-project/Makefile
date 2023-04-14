# Author: Nasseef Abukamail

# Variables
CFLAGS = -Wall -std=c++14
CC = g++

# Rules
a.out: rectangle-main.o rectangle.o #dependancies
	$(CC) $(CFLAGS) rectangle.o rectangle-main.o
	

rectangle.o: rectangle.cc rectangle.h
	$(CC) -c $(CFLAGS) rectangle.cc

rectangle-main.o: rectangle-main.cc rectangle.h
	$(CC) -c $(CFLAGS) rectangle-main.cc

# list any file you want deleted with the command
# make clean
clean:
	rm -rf rectangle.o rectangle-main.o a.out

