#include<stdio.h>
#include<string.h>
struct book
{
	int bookid;
	char tittle[10];
  float price;
  
};
 
  int main()
  {
  	 struct book book1,book2;
  	 book1.bookid=123;
  	 strcpy(book1.tittle,"java");
  	 book1.price=123.22f;
  	  printf(" \n bookid %d",book1.bookid);
  	  printf(" \n tittle %s",book1.tittle);
  	  printf("  \n price %f",book1.price);
   book2.bookid=124;
   strcpy(book2.tittle," html");
   book2.price=124.22f;
   printf("  \n bookid %d",book2.bookid);
   printf("  \n tittle %s",book2.tittle);
   printf(" \n price %f",book2.price);
}
