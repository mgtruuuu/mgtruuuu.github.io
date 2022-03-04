

CC = g++
CXXFLAGS = -Wall -O2
OBJS = foo.o bar.o main.o


%.o   : %.cpp %.h
	$(CC) $(CXXFLAGS) -c $<

main.o : main.cpp foo.h bar.h
	$(CC) $(CXXFLAGS) -c main.cpp

main : $(OBJS)
	$(CC) $(CXXFLAGS) $(OBJS) -o main

.PHONY: clean
clean :
	del $(OBJS) main.exe