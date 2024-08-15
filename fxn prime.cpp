#include<stdio.h>
int prime(int n)
{
	int c,j;
	for (int i=1;i<=n;i++)
	{
		c=0;
		for ( j=2;j<=i/2;j++)
		{if (i%j==0)
		{
			c++;
		break;
		}
		}
		if(c==0 )
		printf("%d ",i);
	}
}
int main()
{
	int n ;
	printf("enter max range ");
	scanf("%d",&n);
	prime(n);
}
