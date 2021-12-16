#include<stdio.h>
#include<conio.h>
int main()
{
int arr1[3][3]={(2,3,4),(5,6,7),(8,9,10)};
int arr2[3][3]={(9,8,7),(6,5,4),(3,2,1)};
int arr3[3][3];
int r,c;

for(r=0;r<3;r++)
{
for(c=0;c<3;c++)
{
arr3[r][c]=arr1[r][c]*arr2[r][c];
}
}
printf(" matrix of multiplication\n");
{
for(r=0;r<3;r++)
{
for(c=0;c<3;c++)
{
printf("%d",arr3[r][c]);
}
printf("\n");
}
getch();
}
}