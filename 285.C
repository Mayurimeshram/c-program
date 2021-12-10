#include<stdio.h>
#include<conio.h>
void main()
{
char r,c,a='A';
clrscr();
for(r='E';r>='A';r--)
{
for(c='E';c>='A';c--)
{
printf("%c",c);
}
printf("\n");
}
getch();
}