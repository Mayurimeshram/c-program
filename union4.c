#include<stdio.h>
#include<string.h>
 union data
 
 {
 	int num1;
 	float num2;
 	char ch[10];
 };
    int main()
    {
    	 union data d1;
    	  
    	  d1.num1=234;
    	  d1.num2=22.44;
    	  strcpy(d1.ch,"Amit");
    	  
    	   printf(" num1 % c",d1.num1);
    	   printf(" num2 %f",d1.num2);
    	   printf(" ch %s",d1.ch);
	}
