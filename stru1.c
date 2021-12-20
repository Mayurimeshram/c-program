#include<stdio.h>
#include<string.h>
struct book
{
	int bookid;
	char tittle[10];
  float price;
  
}
 b1;
  int main()
  {
  	 b1.bookid=123;
  	 strcpy(b1.tittle,"java");
  	 b1.price=123.22f;
  	  printf("  bookid %d",b1.bookid);
  	  printf(" tittle %s",b1.tittle);
  	  printf(" price %f",b1.price);
  }
