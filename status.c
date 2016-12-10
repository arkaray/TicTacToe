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
