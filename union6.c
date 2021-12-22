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
     	  
    	  printf(" data i=%d\n",data.i);
    	  
    	  data.f=22.3;
    	  printf(" data f=%f\n",data.f);
    	  strcpy( data.str," mayuri");
    	  printf(" str=%s\n",data.str);
    	  
    	  
    	  return 0;
	}
