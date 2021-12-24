#include<stdio.h>
int main()
{
char name[10];
int i;
printf("enter your name ");
scanf("%s",&name);

printf("name is %s",name);

for(i=0;i<10;i++){
	printf("\n%c",name[i]);
}

	
}

