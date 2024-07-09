CC = arm-none-eabi-gcc
AR = arm-none-eabi-ar
CFLAGS = -g -Wall -Werror -O2
LDFLAGS = -specs=nosys.specs 
CFLAGS += -Wno-unused-but-set-variable

SRCS = $(wildcard *.c)
OBJS = $(SRCS:.c=.o)

LIB = tinyio.a

MAIN = main

all: $(LIB) $(MAIN)

$(LIB): $(OBJS)
	$(AR) rcs $@ $^

$(MAIN): $(LIB) main.c
	$(CC) $(CFLAGS) main.c -o $(MAIN) -L. -l:tinyio.a $(LDFLAGS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(LIB) $(MAIN)

.PHONY: all clean

