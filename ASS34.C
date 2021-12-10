#include<stdio.h>
#include<conio.h>
void main()
{
int i,a,b;
clrscr();
printf("enter fisrt number");
scanf("%d",&a);
printf("enter second number");
scanf("%d",&b);
i=a%b;
if(i==0)
{
printf("division is possible",a);
}
else
{
printf("division is not possible",b);
}
getch();
}