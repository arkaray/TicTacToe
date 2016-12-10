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
