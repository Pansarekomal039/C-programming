#include<stdio.h>
#define row 10
#define col 10
int main()
{
int mat1[row][col];
int r,c;
printf("Enter the rows of matrix");
scanf("%d",&r);
printf("Enter the columns of matrix");
scanf("%d",&c);
printf("Enter Matrix");
for(int i=0;i<r;i++)
{
for(int j=0;j<c;j++)
{
scanf("%d",&mat1[i][j]);
}
}
printf("Matrix \n");
for(int i=0;i<r;i++)
{
for(int j=0;j<c;j++)
{
printf("%d",mat1[i][j]);
}
printf("\n");
}
return 0;
}
