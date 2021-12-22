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
  	 printf(" num1=%d\n",d1.num1);
  	 d1.num2=33.4f;
  	 printf(" num2=%f\n",d1.num2);
  	 printf("\n num1 = %d",d1.num1); 
  	 d1.ch='A';
  	 printf(" ch =%c\n",d1.ch);
  	 
  }

