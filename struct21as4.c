#include<stdio.h>
#include<string.h>
struct student
{
	 char studentname[10];
	 char studentcity[10];
	  int studentrollno;
	  
};
  int main()
  {
  	 struct student student1;
  	  strcpy( student1.studentname," mayuri");
  	  strcpy( student1.studentcity,"nagpur");
  	  student1.studentrollno=1;
  	 
  	 	 printf(" enter studentname");
  	 	 scanf(" %s",&student1.studentname);
  	 	 printf(" enter studentcity");
  	 	 scanf("% s",&student1.studentcity);
  	 	 printf(" enter studentrollno");
  	 	 scanf("%d",&student1.studentrollno);
	   
	   printf(" \n enter the details of student");
	   printf(" \nstudentname %s",student1.studentname);
	   printf(" \nstudentcity %s",student1.studentcity);
	   printf(" \n studentrollno %d",student1.studentrollno);
	   
	   
	   
	   
	     }
