CC ?= gcc
CFLAGS ?= -std=c11 -Wall -Wextra -pedantic -g
LDFLAGS ?= -lm
EXEEXT ?=

BUILD_DIR := build
SOURCES := $(wildcard *.c)
PROGRAMS := $(patsubst %.c,$(BUILD_DIR)/%$(EXEEXT),$(SOURCES))

.PHONY: all clean list

all: $(PROGRAMS)

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

$(BUILD_DIR)/%$(EXEEXT): %.c | $(BUILD_DIR)
	$(CC) $(CFLAGS) $< -o $@ $(LDFLAGS)

list:
	@printf "%s\n" $(SOURCES)

clean:
	rm -rf $(BUILD_DIR)

