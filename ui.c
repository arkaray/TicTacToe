#include<stdio.h>
#include"types.h"

void display(int arr[][3],char p[])
{
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i != 2)
				printf("_");
			else
				printf(" ");

			printf("%c",p[arr[i][j]]);

			if(j != 2)
				printf("|");
			else
				printf("\n");
		}
	}
}

void showGameResult(int arr[][3])
{
	if(!draw(arr))
		printf("Player %d has won\n",win(arr));
	else
		printf("Game has ended in a draw\n");
}

void inputPosition(Position *pos){
	printf("Enter a position:");
	scanf("%d,%d",&pos->i,&pos->j);
}

void showturn(int p){
	printf("Player %d's turn\n",p);
}

void alert(char const *s){
	printf(s);
}
