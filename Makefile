# ===== Ubuntu / Linux Makefile =====

# Compiler & flags
CC      ?= gcc
CFLAGS  ?= -Wall -Wextra -std=c11 -O2
LDFLAGS ?=
LDLIBS  ?= -lm            # Linux needs -lm for math functions

# Targets & sources
TARGET  := CS5600.LearnC
MAIN    := AravindsanthoshkumarL5600.LearnC
SRCS    := $(MAIN).c mpg2km.c
OBJS    := $(SRCS:.c=.o)
DEPS    := $(SRCS:.c=.d)

.PHONY: all run clean

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $(OBJS) $(LDLIBS)

# Compile C to .o and generate dependency files (.d)
%.o: %.c
	$(CC) $(CFLAGS) -MMD -MP -c -o $@ $<

# Include auto-generated header dependencies
-include $(DEPS)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(OBJS) $(DEPS) $(TARGET)
