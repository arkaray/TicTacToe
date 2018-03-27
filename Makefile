
OUTPUT_OPTION = -MMD -MD -o $@
SRC = $(wildcard *.c)
OBJS = $(SRC:.c=.o)
DEPS = $(SRC:.c=.d)
-include ${DEPS}

all: TicTacToe

test-build: TicTacToe clean

TicTacToe: ${OBJS}
	$(CC) -o $@ $^

clean:
	rm -f *.o
	rm -f TicTacToe
