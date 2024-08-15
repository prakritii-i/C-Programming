#include<stdio.h>
int fact(int);
int main()
{
	int n;
	printf("enter a number ");
	scanf("%d",&n);
	fact(n);
}
int fact(int n)
{
	int i,f=1;
	for(i=1;i<=n;i++) 
	{
		f=f*i;
	}
	printf("factorial=%d",f);
}
