#include"status.h"
#include"ui.h"
#include"types.h"
#include<stdio.h>

/*
**Issues:
**Remove direct interaction with I/O
*/
void turn(int arr[][3])
{
	static int t=1;
	Position pos;
	showturn(t);
	inputPosition(&pos);

	if(arr[pos.i-1][pos.j-1] != 0)
	{
		printf("Position Already Ocuppied\n");
		turn(arr);
		return;
	}

	arr[pos.i-1][pos.j-1] = t;

	if(t == 1)
		t = 2;
	else
		t = 1;
}

void init(int arr[][3],char p[])
{
	int i,j;

	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			arr[i][j]=0;

	p[0] = ' ';
	printf("Enter the symbol for player 1(x or o):");
	scanf("%c",&p[1]);
	if(p[1]=='o')
		p[2] = 'x';
	else
		p[2] = 'o';

	printf("Player 2 symbol set to %c\n",p[2]);
}
