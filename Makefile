CC ?= cc
CFLAGS ?= -Wall -Wextra -Wpedantic -O2

.PHONY: all run clean

all: hello

hello: main.c
	$(CC) $(CFLAGS) -o $@ $<

clean:
	rm -f hello

run: hello
	./hello
