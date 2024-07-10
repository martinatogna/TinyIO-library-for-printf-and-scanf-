CC = arm-none-eabi-gcc
AR = arm-none-eabi-ar
CFLAGS = -g -Wall -Werror -O2
LDFLAGS = -specs=nosys.specs
CFLAGS += -Wno-unused-but-set-variable
INCLUDES = -Iinclude

SRCS = $(wildcard *.c)
OBJS = $(SRCS:.c=.o)

LIB = lib/tinyio.a
BIN = bin/main

all: $(LIB) $(BIN)

# Create the library
$(LIB): $(OBJS)
	@mkdir -p lib
	$(AR) rcs $@ $^

# Create the executable binary
$(BIN): $(LIB) main.c
	@mkdir -p bin
	$(CC) $(CFLAGS) $(INCLUDES) main.c -o $@ -Llib -l:tinyio.a $(LDFLAGS)

# Object file compilation
%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -f $(OBJS) $(LIB) $(BIN)

.PHONY: all clean

