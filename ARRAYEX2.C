#include<stdio.h>
#include<conio.h>
void main()
{
int marks[5];
int i;
int sum=0;
for(i=0;i<5;i++)
{
printf(" enter marks%d\n",marks[i]);
sum=sum+marks[i];
}
getch();
}