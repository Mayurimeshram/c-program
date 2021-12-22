#include<stdio.h>
#include<string.h>
struct employee
{
 int empno;
 char emponame[10];
 float empsalary;	
};
	  
int main()
{
	struct employee employee1,employee2;
	printf(" enter empno");
	scanf(" %d",&employee1.empno);
	printf(" enter emponame");
	scanf("%s",&employee1.emponame);
	printf(" enter emposalary");
	scanf(" %f",&employee1.empsalary);
	
	
	printf(" enter empno");
	scanf(" %d",&employee2.empno);
	printf(" enter emponame");
	scanf("%s",&employee2.emponame);
	printf(" enter emposalary");
	scanf(" %f",&employee2.empsalary);
	
	   printf(" \n enter deatials of employee");
	   printf(" \n empno %d",employee1.empno);
	   printf("\n  emponame %s",employee1.emponame);
	   printf("\n empsalary %f",employee1.empsalary);
	   
	   printf(" \n empno %d",employee2.empno);
	   printf("\n emponame %s",employee2.emponame);
	   printf("\n empsalary %f",employee2.empsalary);
}
