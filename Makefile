# Compiler & flags
CC      ?= gcc
CFLAGS  ?= -Wall -Wextra -std=c11 -O2
LDFLAGS ?=
LDLIBS  ?= -lm          # OK on Linux/macOS; MinGW usually ignores it. Remove if it errors.

# Detect Windows for .exe & clean command
ifeq ($(OS),Windows_NT)
  EXEEXT := .exe
  RM := rm -f           # ok under MSYS/MinGW; if using plain cmd, change to: del /Q
else
  EXEEXT :=
  RM := rm -f
endif

TARGET  := CS5600.LearnC$(EXEEXT)

MAIN    := AravindsanthoshkumarL5600.LearnC
SRCS    := $(MAIN).c mpg2km.c
OBJS    := $(SRCS:.c=.o)
DEPS    := $(SRCS:.c=.d)

.PHONY: all run clean

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $(OBJS) $(LDLIBS)

# Compile C to .o and generate deps
%.o: %.c
	$(CC) $(CFLAGS) -MMD -MP -c -o $@ $<

# Pull in auto-generated header dependencies
-include $(DEPS)

run: $(TARGET)
	./$(TARGET)

clean:
	$(RM) $(OBJS) $(DEPS) $(TARGET)
