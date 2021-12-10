#include<stdio.h>
#include<conio.h>
void main()
{
char r,c,a='A';
clrscr();
for(r='E';r>='B';r--)
{
for(c='E';c>='B';c--)
{
printf("%c",r);
}
printf("\n");
}
getch();
}