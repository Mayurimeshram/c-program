#include<stdio.h>
#include<string.h>
struct prod
{
	 int prodid;
	 char prodname[10];
	 float price;
	 
};
  int main()
  {
  	 struct prod prod1;
  	 printf(" enter prodid");
  	 scanf(" %d",&prod1.prodid);
  	 printf(" enter prodname");
  	 scanf(" % s",&prod1.prodname);
  	 printf(" enter price");
	   scanf(" %f",&prod1.price);
	   
	   printf(" \n enter the details of prod");
	   printf(" prodid %d",prod1.prodid);
	   printf(" title %s",prod1.prodname);
	   printf(" price %f",prod1.price);
	   
	   
	   
	   
	   
	   
	     }
