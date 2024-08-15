//to find the greatest among 3 uisng function 
#include<stdio.h>
int great(int a, int b, int c)
{
	if (a>b && a>c)
	{printf("a") ;
	}
	else if (b>a && b>c)
	{printf("b") ;
	}
	else
	printf("c") ;
 } 
 int main ()
 {
 	int g,a,b,c;
 	scanf("%d%d%d",&a,&b,&c);
 	g=great(a,b,c);
 	printf("large=%c",g);
 }
