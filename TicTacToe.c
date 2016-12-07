#include<stdio.h>
#define DRAW 0

int filled(int arr[][3])
{
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(arr[i][j]==0)
				return 0;
		}
	}
	return 1;
}

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


/*Returns the winner if winner can be determined
**ie. 1 or 2 indicating player 1 or player 2
**else 0
*/
int win(int arr[][3])
{
	int ans=0;
	int i;
	for(i=0;i<3;i++)
	{
		if(arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2])
			ans = arr[i][0];
		if(arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i])
			ans = arr[0][i];
	}
	if(arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2])
		ans = arr[0][0];
	if(arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0])
		ans = arr[1][1];
	return ans;
}

void turn(int arr[][3])
{
	static int t=1;
	int i,j;
	printf("Player %d's turn\n",t);
	printf("Enter a position:");
	scanf("%d,%d",&i,&j);
	
	if(arr[i-1][j-1] != 0)
	{
		printf("Position Already Ocuppied\n");
		turn(arr);
		return;
	}
	
	arr[i-1][j-1] = t;
	
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


int main()
{
	int arr[3][3];
	char p[3];
	
	printf("\t\tTic-Tac-Toe\n\n");
	
	init(arr,p);
	display(arr,p);
	
	while(!win(arr) && !filled(arr))
	{
		turn(arr);
		display(arr,p);
	}
	if(win(arr)!=DRAW)
		printf("Player %d has won\n",win(arr));
	else
		printf("Game has ended in a draw\n");
	
	return 0;
}
