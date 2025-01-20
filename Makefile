CC = gcc
CFLAGS := -Wall -g -Iinclude -DBUILD_STANDALONE

mcp3008-poll: mcp3008-poll.c include/mcp3008-poll.h
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f mcp3008-poll
