#include<stdio.h>
int main()
{
	int num;
	num=2;
	if(num==1)
	   goto label1;
	      else if(num==2)
	        goto label2;
	           else
	             goto label3;
	              
	              
	              
	              
	              label1:
	              	  printf("\n enter Number One");
	              	      goto label3;
	              	   label2:
						   printf("\n enter number two");
						     goto label3;
					label3:
					    printf("\nBye");
						   	     
}
