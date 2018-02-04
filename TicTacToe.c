#include<stdio.h>
#include"ui.h"
#include"status.h"
#include"gameplay.h"

int main()
{
	int arr[3][3];
	char p[3];

	printf("\t\tTic-Tac-Toe\n\n");

	init(arr,p);
	display(arr,p);

	while(!win(arr) && !draw(arr))
	{
		turn(arr);
		display(arr,p);
	}
	showGameResult(arr);
	return 0;
}
