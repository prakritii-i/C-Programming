#include<stdio.h>
int pos(int a)
{
	if (a>0)
	{
		printf("positive");
	}
	else if (a<0)
	{
		printf("-ve");
	}
	else 
	{
		printf("zero");
	}
	
}
int main()
{
	int g,a;
	printf("enter three numbers :");
	scanf("%d",&a);
	g=pos(a);
	printf("the largest no. is =%d",g);
}
