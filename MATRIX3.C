#include<stdio.h>
#include<conio.h>
int main()
{
int arr1[2][2]={(2,3),(4,5)};
int arr2[2][2]={(6,7),(8,9)};
int arr3[2][2];
int r,c;

for(r=0;r<2;r++)
{
for(c=0;c<2;c++)
{
arr3[r][c]=arr1[r][c]*arr2[r][c];
}
}
printf(" matrix of multiplication\n");
{
for(r=0;r<2;r++)
{
for(c=0;c<2;c++)
{
printf("%d",arr3[r][c]);
}
printf("\n");
}
getch();
}
}