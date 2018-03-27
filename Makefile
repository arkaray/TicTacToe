
OUTPUT_OPTION = -MMD -MD -o $@
SRC = $(wildcard *.c)
OBJS = $(SRC:.c=.o)
DEPS = $(SRC:.c=.d)
-include ${DEPS}

all: TicTacToe

.PHONY: test-build
test-build: TicTacToe clean

TicTacToe: ${OBJS}
	$(CC) -o $@ $^

.PHONY: clean
clean:
	rm -f *.o
	rm -f TicTacToe
