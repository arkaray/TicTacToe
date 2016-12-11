
all: TicTacToe

TicTacToe: TicTacToe.c status.o ui.o gameplay.o
	$(CC) -o $@ TicTacToe.c status.o ui.o gameplay.o

%.o:	%.c
	$(CC) -c $<

