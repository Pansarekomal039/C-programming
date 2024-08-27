#include<stdio.h>
#define row 10
#define col 10
int main()
{
int mat[row][col];
int sum[100][100];
int r,c;
printf("Enter the rows of matrix");
scanf("%d",&r);
printf("Enter the columns of matrix");
scanf("%d",&c);
printf("Enter Matrix element\n");
for(int i=0;i<r;i++)
{
for(int j=0;j<c;j++)
{
scanf("%d",&mat[i][j]);
}
}
printf("Matrix \n");
for(int i=0;i<r;i++)
{
for(int j=0;j<c;j++)
{
printf("%d\t",mat[i][j]);
}
printf("\n");
}
for(int i=0;i<r;i++)
{
for(int j=0;j<c;j++)
{
sum[i][j]=5+mat[i][j];
}
}
printf("Matrix Addition\n");
for(int i=0;i<r;i++)
{
for(int j=0;j<c;j++)
{
    printf("%d\t",sum[i][j]);
}
printf("\n");
}
return 0;
}