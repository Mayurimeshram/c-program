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
  	struct book book1;
    printf(" enter bookid");
	scanf("%d",&book1.bookid);
	printf(" enter tittle");
	scanf("%c",&book1.tittle);
	printf(" enter price");
	scanf("%f",&book1.price);
	printf("\n -------------book details are -----------"); 	 
  	  printf(" \n bookid %d",book1.bookid);
  	  printf(" \n tittle %s",book1.tittle);
  	  printf("  \n price %f",book1.price);
}
