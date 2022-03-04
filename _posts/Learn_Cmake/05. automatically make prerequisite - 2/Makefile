

CC = g++
CXXFLAGS = -Wall -O2
OBJS = foo.o bar.o main.o


%.o : %.cpp %.h
	$(CC) $(CXXFLAGS) -c $<
%.o : %.cpp
	$(CC) $(CXXFLAGS) -c $<


main : $(OBJS)
	$(CC) $(CXXFLAGS) $(OBJS) -o main


.PHONY: clean
clean :
	del $(OBJS) main.exe


include main.d
-include $(OBJS:.o=.d)