#include<stdio.h>
#include<string.h>
struct book
{
	int bookid;
	 char title [10];
	
};
 int main()
 {
 	struct book book1[3];
 	int i;
 	for(i=0;i<3;i++)
 	
 	printf("  enter bookid");
 	scanf("%d",&book1[i].bookid);
 	printf("  enter title\n");
 	scanf("%s",&book1[i].title);
 	
 	
 }
   printf("\n -------------book details of 3 books  are -----------");
   for(i=0;i<3;i++)
   {
   	printf("\n book deati=ails [%d]",i+1);
   printf(" bookid %d",book1[i],bookid);
   printf(" book title %s",book1[i],title);
   printf("\n  ");
   
   
   
}
  
   }
   
