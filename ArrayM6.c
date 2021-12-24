// accept name
#include<stdio.h>
int main()
{
char name[5][10];
int i;
for(i=0;i<5;i++){
	printf("enter your name ");
scanf("%s",&name[i]);
}

//display the 5 names
for(i=0;i<5;i++){
printf("\nname is %s",name[i]);
}
}

