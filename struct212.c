#include<stdio.h>
#include<string.h>
struct book
{
	int  bookid;
	char  title[10];
	float  price;
	
}
 b1;
  int main()
  {
  	struct book book1,book2;
  	book1.bookid=123;
  	strcpy(book1.title,"java");
  	book1.price=22.2f;
  	printf(" \n bookid % d",book1.bookid);
  	printf(" \n title % s",book1.title);
  	printf("\n price %f",book1.price);
  	
  	 book2.bookid=124;
  	 strcpy(book2.title,"html");
  	 book2.price=23.2f;
  	 printf("\n bookid  %d",book2.bookid);
  	 printf(" \n title %s",book2.title);
  	 printf(" \n price %f",book2.price);
  }
