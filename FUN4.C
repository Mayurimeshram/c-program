// function  without parametersand not  returning any value//

#include<stdio.h>
#include<conio.h>
void addition()
{
int n1,n2,res;
clrscr();
printf(" enter two number\n");
scanf("%d%d",&n1,&n2);
res=n1+n2;
printf(" addition of 2 numbers%d",res);
}

void main()
{
printf(" calling fuction of addion from main function");
addition();
printf("\n Bye");
}

getch();

