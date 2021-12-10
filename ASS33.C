#include<stdio.h>
#include<conio.h>
void main()
{
int x,y;
clrscr();
printf("enter the coordinate x\n");
scanf("%d",&x);
printf("enter the coordinate y\n");
scanf("%d",&y);

{
if(x>0&&y>0)
{
printf("quadrant -1(++)\n");
}
if (x>0 &&y<0)
{
printf(" quadrant 2(+-)\n");
}
if (x<0&&y<0)
{
printf("quadrant 3(--)\n");
}
if (x<0&&y>0)
{
printf("quadrant 4(-+)\n");
}
getch();
}
}