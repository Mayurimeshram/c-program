#include<stdio.h>
#include<conio.h>
void main()
{
int x,y,i,r=1;
printf(" x ,y value" );
scanf("%d%d",&x,&y);
i=1;
while(i<=y)
{
r=r*x;
i++;
}
printf("%d",r);
getch();
}

