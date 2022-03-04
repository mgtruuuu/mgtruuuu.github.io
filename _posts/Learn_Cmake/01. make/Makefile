foo.o : foo.h foo.cpp
	g++ -c foo.cpp

bar.o : bar.h bar.cpp
	g++ -c bar.cpp

main.o : main.cpp foo.h bar.h
	g++ -c main.cpp

main : foo.o bar.o main.o
	g++ foo.o bar.o main.o -o main