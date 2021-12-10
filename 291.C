#include<stdio.h>
#include<conio.h>
void main()
{
int r,c;
clrscr();
for(r=3;r>=1;r--)
{
for(c=5;c<=r;c++)
{
printf("%d",r);
}
printf("\n");
}
getch();
}