
	  
	 #include<stdio.h>
	 int main()
	 {
	 	char name[10];
	 	char name1[10];
	 	printf(" enter name");
	 	scanf("%s",name);
	 	 printf(" name is %s",name);
	 	 
	 	 {
	 	 	 strcpy(name1,strrev(name));
	 	 	 printf("revered name is %s",name1);
		  }
	 }
