//structure
#include<stdio.h>
#include<string.h>
struct emp
{
	char name[50];
	int item;
	int rate;
};
int main()
{
	struct emp e;
	printf("enter item name ");
	scanf("%s",&e.name[50]);
	printf("enter stock ");
	scanf("%d",&e.item);
	printf("enter unit rate ");
	scanf("%d",&e.rate);
	printf("item name \tstock \t\t unit rate \t total  \n");
	printf("%s \t\t %d \t\t %d\t %d",e.name[50],e.item,e.rate,e.item*e.rate);
} 
