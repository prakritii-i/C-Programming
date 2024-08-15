/*
12345
1234
123
12
1
*/
#include<stdio.h >
int main()
{
	int i,j;
	for (i=1;i<=5;i++)
	{
		
		for (j=1;j+i<=6;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}
