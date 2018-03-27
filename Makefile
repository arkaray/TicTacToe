
all: TicTacToe

test-build: TicTacToe clean

TicTacToe: TicTacToe.c status.o ui.o gameplay.o
	$(CC) -o $@ TicTacToe.c status.o ui.o gameplay.o

clean:
	rm -f *.o
	rm -f TicTacToe
