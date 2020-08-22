#include<stdio.h>
int main()
{
	int i, j, N;

	scanf_s("%d", &N);
	for (j = 0;j <= N;j++)
	{
		for (i = 0;i <= j;i++)
		{
			printf("X");

		}
		printf("\n");
	}
	


	return 0;
}