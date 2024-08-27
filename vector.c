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


#include<stdio.h>
#define row 10
#define col 10
int main()
{
int mat[row][col];
int mat1[row][col];
int sum[100][100];
int r,c;
printf("Enter the rows of matrix");
scanf("%d",&r);
printf("Enter the columns of matrix");
scanf("%d",&c);
printf("Enter First Matrix element\n");
for(int i=0;i<r;i++)
{
for(int j=0;j<c;j++)
{
scanf("%d",&mat[i][j]);
}
}
printf("first Matrix \n");
for(int i=0;i<r;i++)
{
for(int j=0;j<c;j++)
{
printf("%d\t",mat[i][j]);
}
printf("\n");
}
printf("Enter vector element\n");
for(int i=0;i<r;i++)
{
scanf("%d",&mat1[i][0]);

printf("\n");
}

printf("vector \n");
for(int i=0;i<r;i++)
{
printf("%d\t",mat[i][0]);
printf("\n");
}

for(int i=0;i<r;i++)
{
for(int j=0;j<c;j++)
{
sum[i][j]=mat[i][j]+mat1[i][0];
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
