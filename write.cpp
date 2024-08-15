#include<stdio.h>
int main ()
{
	FILE* fptr;
	fptr=fopen("newfile.txt","w");
	fputs("i love you ",fptr);
	fputs("\n so what ",fptr);
	fclose(fptr);
}
