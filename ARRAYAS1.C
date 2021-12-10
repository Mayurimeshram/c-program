#include<stdio.h>
#include<conio.h>
void main()
{
int a[5];
int i=0;
printf("enter any 5 number");
for(i=0;i<=5;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<=5;i++)
{
printf("%d",a[i]);
}
getch();
}