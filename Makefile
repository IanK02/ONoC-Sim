# Makefile for Optical Network-on-Chip Simulation

CC = gcc
CFLAGS = -Wall -Wextra -O3
SRCDIR = src
BINDIR = bin
DATADIR = data
SCRIPTDIR = scripts

SOURCES = $(wildcard $(SRCDIR)/*.c)
OBJECTS = $(patsubst $(SRCDIR)/%.c,$(BINDIR)/%.o,$(SOURCES))
EXECUTABLE = $(BINDIR)/onoc_sim

.PHONY: all clean run visualize

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(CFLAGS) $^ -o $@

$(BINDIR)/%.o: $(SRCDIR)/%.c | $(BINDIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(BINDIR):
	mkdir -p $(BINDIR)

$(DATADIR):
	mkdir -p $(DATADIR)

run: $(EXECUTABLE) $(DATADIR)
	./$(EXECUTABLE)

visualize:
	python $(SCRIPTDIR)/visualize.py

clean:
	rm -rf $(BINDIR) $(DATADIR)/results.csv $(DATADIR)/onoc_performance.png

install-deps:
	pip install -r $(SCRIPTDIR)/requirements.txt