#include<stdio.h>
int main ()
{
	FILE* fptr;
	fptr=fopen("text.txt","r");
	char con[1000];
	if(fptr!= NULL)
	{
		fgets(con,1000,fptr);
		printf("%s",con);
	}
	else
	printf(" not opened successfully");
	fclose(fptr);
}
