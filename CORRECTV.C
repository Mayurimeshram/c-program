//c program that accepts 4 integers p,q,r,s from the user where r and s are posit nd p is even .if q is > pnd id the sum of r and s is > the sum of r nd s is> the sum od pnd q print correct value otherwise wrong value//

#include<stdio.h>
#include<conio.h>
void main()
{
 int p,q,r,s;
 clrscr();
 printf("enter any four number");
 scanf("%d%d%d%d",&p,&q,&r,&s);
 if((p>r)&&(s>p)&&(r+s)>(p+q)&&(r>0)&&(s>0)&&(p%2==0))
 {
 printf("\n correct values");
 }
 else{
 printf("\n wrong values\n");
 }
 getch();
 }