#include<stdio.h>
#include<conio.h>
void factorial(int)  ;
 int main()
{
int num;
printf(" enter number\n");
scanf("%d",&num);
factorial(num);
}
 void factorial(int num)
 {
 int fact=1;

 while(num>0)
 {
 fact=fact*num;
 num--;
 }
  printf(" factorial=%d",fact);
  }

getch();