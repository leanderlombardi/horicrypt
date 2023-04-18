CC = gcc
CFLAGS = -Wall -Wextra -pedantic -O2

PREFIX = /usr/local
BINDIR = $(PREFIX)/bin

horicrypt: horicrypt.c
	$(CC) $(CFLAGS) $< -o $@

.PHONY: install uninstall clean

install: horicrypt
	install -d $(BINDIR)
	install -m 755 $< $(BINDIR)

uninstall:
	rm -f $(BINDIR)/horicrypt

clean:
	rm -f horicrypt

