/*
1 2 3 4 5
  2 3 4 5
    3 4 5
      4 5
    	5
*/
#include<stdio.h >
int main()
{
	int i,j;
	for (i=1;i<=5;i++)
	{
		
		for (j=1;j<6;j++)
		{
		if (i>j)
		{
				printf(" ");}
			else if(i<=j) 
		{
			printf("%d",j);}
			
		}
		printf("\n");
	}
}
