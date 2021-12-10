#include<stdio.h>
#include<conio.h>
void main()
{
int a[5];
int i=0,sum=0;
clrscr();
printf(" enter any 5 number");
for(i=0;i<=5;i++)
{
scanf("%d",&a[i]);
sum=sum+a[i];
}
for(i=0;i<=5;i++);
{
printf("%d",&a[i]);
}
getch();
}
