#include<stdio.h>
#include<conio.h>
void main()
{
int num1,num2,s1;
clrscr();
printf("enter 2 number");
scanf("%d%d",&num1,&num2);
s1=num1;
num1=num2;
num2=s1;
printf("After swapping");
printf("num1=%d num2=%d",num1,num2);
getch();
}