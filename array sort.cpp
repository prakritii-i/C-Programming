#include<stdio.h>
int main()
{

int A[4],i,j,temp;
printf("Enter the elements");
for(i=0;i<5;i++)
{
	scanf("%d",&A[i]);
}
for(i=0;i<5;i++)
{
	for(j=i+1;j<5;j++)
	{
		if(A[i]>A[j])
		{
			temp=A[i];
			A[i]=A[j];
			A[j]=temp;
		}
	}
	
}
printf("The sorted elements:\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t",A[i]);
	
	}	
}
	


