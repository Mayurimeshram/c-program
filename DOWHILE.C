#include<stdio.h>
#include<conio.h>
void main()
{
int num,s,d1;
printf("enter any n digit number");
scanf("%d",&num);
s=0;
do (num>0);
{
d1=num%10;
s=s+d1;
printf("%d\n",s);
num=num/10;
}
while(num>0)
print("%d",s)
getch();
}