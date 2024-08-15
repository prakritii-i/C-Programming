//malloc(), realloc(), free()
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n=4;
	int *ptr;
	ptr=(int*) malloc(n*sizeof(int));
	if(ptr==NULL){
		printf("not al");
	
	}
	printf("enter input values:\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",ptr+1);
	}
	printf("entered values:\n");
	for(int i=0;i<n;i++)
	{
		printf("%d ",*(ptr+1));
	}
	free(ptr);
	return 0;
}
