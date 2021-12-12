#include<stdio.h>
#include<conio.h>
void main()
{
 float x,y,z,a,p;
 printf(" enter fisrt number");
 scanf("%f",&x);
 printf("enter second number");
 scanf("%f",&y);
 printf("enter third number");
 scanf("%f",&z);
 if(x<(y+z)&&y<(x+z)&&z<(x+y))
 {
 p=x+y+z;
 printf(" perimeter=%1f\n",p);
 }
 else{
 printf("\n not possible to make triangle");
 }
 getch();
 }