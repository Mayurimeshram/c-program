#include<stdio.h>
#include<conio.h>
void main()
{
char r,c,a='A';
for(r='A';r>='E';r--)
{
for(c='A';c<=r;c++)
{
printf("%d",r);
}
printf("\n");
}
getch();
}