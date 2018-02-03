
all: TicTacToe

test: TicTacToe clean

TicTacToe: TicTacToe.c status.o ui.o gameplay.o
	$(CC) -o $@ TicTacToe.c status.o ui.o gameplay.o

%.o:	%.c
	$(CC) -c $<
clean:
	rm -f *.o
	rm -f TicTacToe
