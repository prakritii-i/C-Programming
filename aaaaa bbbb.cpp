/*
a
ab
abc
abcd
abcde*/
#include<stdio.h>
int main ()
{
	int i ,j;
	for(i=0;i<=5;i++)
{
	for(j=1;j<=i;j++)
	{
	printf("%c",j+96)	;
	}
	printf("\n");
}
}
