#include<stdio.h>
int main()
{
	float i , fact=1;
	float ans=0;
	for (i=1;i<=5;i++)
	{
		fact=fact*i;
		ans=ans+(i/fact);
	}
	printf("1/1!+2/2!...........=%f",ans);
}
