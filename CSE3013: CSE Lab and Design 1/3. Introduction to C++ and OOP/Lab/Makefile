OBJECTS = main.o array.o rangearray.o
SRC = main.cpp array.cpp rangearray.cpp

CC = g++
CPPFLAGS = -g -c

TARGET = main

$(TARGET): $(OBJECTS) Array.h RangeArray.h
        $(CC) -o $(TARGET) $(OBJECTS)

clean: 
        rm $(OBJECTS) $(TARGET)

