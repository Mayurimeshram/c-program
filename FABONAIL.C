#include<stdio.h>
#include<conio.h>
void main()
{
int a=0,b=1,c=0,r;
clrscr();
printf("enter r");
scanf("%d",&r);
printf("%d %d",a,b);
while(c<=r)
{
c=a+b;
if(c<=r)
printf("%d",c);
a=b;
b=c;
}
getch();
}