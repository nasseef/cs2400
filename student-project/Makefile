# Author: Nasseef Abukamail

# Variables
CFLAGS = -Wall -std=c++14
CC = g++

# Rules
a.out: student-main.o student.o #dependancies
	$(CC) $(CFLAGS) student.o student-main.o
	

student.o: student.cc student.h
	$(CC) -c $(CFLAGS) student.cc

student-main.o: student-main.cc student.h
	$(CC) -c $(CFLAGS) student-main.cc

# list any file you want deleted with the command
# make clean
clean:
	rm -rf student.o student-main.o a.out

