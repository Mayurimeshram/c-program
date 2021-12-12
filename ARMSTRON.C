#include<stdio.h>
#include<conio.h>
void main()
{
int num,s,d1;
clrscr();
printf(" enter n digit number");
scanf("%d",&num);
s=0;
while(num>0)
{
d1=num%10;
s=s*(d1*d1*d1);
num=num/10;
}
printf("%d",s);
if(num==s)
{
printf(" It is  armstrong");
}
else
{
printf(" it is not armstrong");
}
getch();
}