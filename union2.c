#include<stdio.h>
 union data
 {
 	 int num1;
 	 char ch;
 	 float num2;
 	 
 };
      int main()
  {
  	 union data d1;
  	 d1.num1=22;
  	 d1.num2=33.4f;
   d1.ch='A';
  	 
  	 printf(" num1=%c\n",d1.num1);
  	 printf(" num2=%f\n",d1.num2);
  	 
  	 printf(" ch =%c\n",d1.ch);
  	 
  }

