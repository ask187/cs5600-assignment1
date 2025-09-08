#
#   Aravind Santhosh Kumar  - CS5600 - Assignment 1 - Program in C
#
#  	Makefile to compile the project
#
#

# compiler variable
CC      = gcc
# variable for the math lib
LIB  ?= -lm
# target
TARGET  := CS5600.LearnC
# main file 
MAIN    := AravindsanthoshkumarL5600.LearnC.c
# all .c files
SRCS    := $(MAIN) mpg2km.c
# all objects ( from the .c files )
OBJS    := $(SRCS:.c=.o)
# header files
HEADR   := mpg2km.h

.PHONY: all run clean

all: $(TARGET)

# target compile commands
$(TARGET): $(OBJS)
	$(CC) -o $@ $^ $(LIB)


# Compile .o for each .c file 
%.o: %.c
	$(CC) -c $< -o $@ 

# run command for the target
run: $(TARGET)
	./$(TARGET)

# clean and remove all objetcs and target 
clean:
	rm -f $(OBJS) $(TARGET)
