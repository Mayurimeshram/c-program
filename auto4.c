#include<stdio.h>
 int num1;
 void display();
  int main()
 {
   extern int num1;
     
	 printf("  enter the extern value num%d",num1);
	 num1=2;
	 printf(" enter the extern value after initiallising num1=%d",num1);
	 display() ;
	 	
 }
    void display()
    {
    	
	
     printf(" \n enter the extern value  num1 inside the display function=%d",num1);
}
