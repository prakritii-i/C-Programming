
# include <stdio.h>
# include <conio.h>
int main ()
{
int x = 10, y, z;

y = --x;
z=x++;
printf("\n The value of x = %d, y =%d, z = %d",x,y);
x=x+y+z;
y=z++;
printf("\n The value of y =%d",x);
printf("\n The value of y =%d",y);
printf("\n The value of y =%d",z);
if (y>z)
printf ("\n The value of y is greater than z");
else
printf ("\n The value of z is greater than y");
getch() ;}

