#include<stdio.h>
int large(int a,int b,int c)
{
	if (a<b && a>c)
	{
		return a;
	}
	else if (b<a && b>c)
	{
		return b;
	}
	else 
	{
		return c;
	}
	
}
int main()
{
	int g,a,b,c;
	printf("enter three numbers :");
	scanf("%d%d%d",&a,&b,&c);
	g=large(a,b,c);
	
	printf("the middle no. is =%d",g);
}
