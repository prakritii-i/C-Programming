/*
5 10 15 20 25
10 15 20 25 30
15 20 25 30 35
20 25 30 35 40
25 30 35 40 45
*/
#include<stdio.h >
int main()
{
	int i,j;
	for (i=1;i<=5;i++)
	{
	for (j=1;j<=5;j++)
		{
		printf("%d ",((i+j)-1)*5);
		}
			printf("\n");
	}
}
