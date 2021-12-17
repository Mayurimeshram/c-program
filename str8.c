#include<stdio.h>
#include<string.h>
int main()
{
 char name[20];
 int len;
 int i;
 puts(" enter name");
 gets(name);
 len=strlen(name);
 printf(" lenght of string is %d",len);
 printf(" size od array %d",sizeof(name));
}
