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
  	b1.bookid=123;
  	strcpy(b1.title,"java");
  	b1.price=22.2f;
  	printf(" \n bookid :% d",b1.bookid);
  	printf(" \n title % s",b1.title);
  	printf("\n price %f",b1.price);
  }
