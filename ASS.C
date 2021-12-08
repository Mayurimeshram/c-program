#include<stdio.h>
#include<conio.h>
void main()
{
 int p,q,r,s;
 clrscr();
 printf("enter any four number");
 scanf("%d%d%d%d",&p&q&r&s);
 if((p>r)&&(s>p)&&(r+s)>(p+q)&&(r>0)&&(s>0)&&(p%2==0))
 {
 printf("\n correct values\n");
 }
 else{
 print("\n wrong values\n");
 }
 getch();
 }