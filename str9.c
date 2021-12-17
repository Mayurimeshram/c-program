
#include <stdio.h>
#include <string.h>
int main()
{
     char str1[20] = "BeginnersBook";
     printf("Length of string str1 when maxlen is 30: %d\n", strnlen(str1, 30));
     printf("Length of string str1 when maxlen is 40: %d\n", strnlen(str1, 40));
     return 0;
}


