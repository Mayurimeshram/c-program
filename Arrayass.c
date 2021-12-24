#include<stdio.h>
int main()
{
	int arr[5]= {1,2,3,4,5};
	int num;
	int i;
	printf("enter number");
	scanf("%d",&num);
	for(i=0;i<5;i++) {
		if(num == arr[i]) {
			printf("no found at position %d ",i+1);
			break;
		}
	}
	if(i==5)
	{
		printf("no not found in an array");
	}
	
}

