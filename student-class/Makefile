# Author: Nasseef Abukamail

# Variables
CFLAGS = -Wall -std=c++14
CC = g++


# Rules
# first rule is the one executed automatically
student.exe: student-main.o student.o  #dependencies
	$(CC) $(CFLAGS) student.o student-main.o -o student.exe
#	g++ -Wall -std=c++14 student.o student-main.o
	

student.o: student.cc student.h
	$(CC) -c $(CFLAGS) student.cc

student-main.o: student-main.cc student.h
	$(CC) -c $(CFLAGS) student-main.cc

# list any file you want deleted with the command
# make clean
clean:
	rm -rf student.o student-main.o
	mv a.out student.exe

