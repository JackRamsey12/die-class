# Author: Gyver Blessing
#8/28/2020

CFLAGS = -Wall -std=c++11
CC = g++
#linking all the files
#Create the executable program "die-main"
a.out: die-main.o die.o
	$(CC) $(CFLAGS) die.o die-main.o
die.o: die.cc die.h
	$(CC) -c $(CFLAGS) die.cc
die-main.o: die-main.cc die.h
	$(CC) -c $(CFLAGS) die-main.cc
clean:
	rm -f die-main.o die.o die-main a.out