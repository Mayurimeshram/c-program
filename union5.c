#include<stdio.h>
#include<string.h>
 union data
 {
 	 int i;
 	 float f;
 	 char str[20];
 	 
 };
    int main()
    {
    	union data data;
    	 data.i=22;
    	 data.f=22.3;
    	  strcpy( data.str," mayuri");
    	  
    	  
    	  printf(" data i=%d\n",data.i);
    	  printf(" data f=%f\n",data.f);
    	  printf(" str=%s\n",data.str);
	}
