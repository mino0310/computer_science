#include <stdio.h>
int main(void)
{
	int n, i, j, arr[102][102];
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			arr[i][j] = (i - 1) * n + j;
		}
	}
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			if (j % 2 == 1)
			{
				printf("%d ", arr[j][n + (1-i)]);
			}
			else
			{
				printf("%d ", arr[j][i]);
			}

		}		
		printf("\n");
	}
	return 0;
}
