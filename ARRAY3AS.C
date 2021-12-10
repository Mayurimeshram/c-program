#include<stdio.h>
#include<conio.h>
void main()
{
int a[5];
int i,Ecount=0,Ocount=0;
clrscr();
printf("enter any 5 number\n");
for(i=0;i<=5;i++)
{
scanf("%d",&a[i]);
}
if(a[i]%2==0)
{
printf("even number %d=%d\n",i,a[i]);
}
else if(a[i]%2!=0)
{
printf("odd number %d=%d\n",i,a[i]);
}
  printf("\n");
  if(a[i]%2==0)
  {
  Ecount++;
  printf(" total even elements %d",Ecount);
  }
  if(a[i]%2!=0)
  {
  Ocount++;
  printf("total Odd elements %d",Ocount);
  }

  getch();

  }