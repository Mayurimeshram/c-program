#include<stdio.h>
#include<string.h>
struct book
{
	 int bookid;
	 char title[10];
	 float price;
	 
};
  int main()
  {
  	 struct book book1;
  	 printf(" enter bookid");
  	 scanf(" %d",&book1.bookid);
  	 printf(" enter title");
  	 scanf(" % s",&book1.title);
  	 printf(" enter price");
	   scanf(" %f",&book1.price);
	   
	   printf(" \n enter the details of book");
	   printf(" bookid %d",book1.bookid);
	   printf(" title %s",book1.title);
	   printf(" price %f",book1.price);
	   
	   
	   
	   
	   
	   
	     }
