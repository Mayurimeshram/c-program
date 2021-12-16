#include<stdio.h>
#include<conio.h>
 float addition(int n1,int n2);
 int main()
 {
 int num1,num2;
 float result;
 printf(" enter two numbers");
 scanf("%d%d",&num1,&num2);
result=num1+num2;
printf(" addition of 2 no %f",result);
}
float addition(int n1,int n2)
{
float res=n1+n2;
 return res;
 }