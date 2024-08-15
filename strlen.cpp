#include<stdio.h>
#include<string.h>
int main()
{
	char a[50],u;
	int l;
	printf("enter a string :");
	scanf("%s",a);
	l=strlen(a);
    printf("uppercase=%s",strupr(a));
	printf(" string length =%d %s ",l,u);
	
 } 
