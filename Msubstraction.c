ko#include<stdio.h> 
#define row 10
#define col 10   
int main() 
{ 
int mat1[row][col]; 
int mat2[row][col];
int sum[100][100];   
int r,c;
printf("Enter the rows of matrix");
scanf("%d",&r);
printf("Enter the columns of matrix");
scanf("%d",&c);
printf("Enter  first Matrix\n");
for(int i=0;i<r;i++)
{
for(int j=0;j<c;j++) 
{
scanf("%d",&mat1[i][j]);
}
}
printf("Enter second Matrix\n");
for(int i=0;i<r;i++)
{
for(int j=0;j<c;j++)
{
scanf("%d",&mat2[i][j]);
}
}
printf("First Matrix \n");
for(int i=0;i<r;i++)
{
for(int j=0;j<c;j++)
{ 
printf("%d\t",mat1[i][j]);
}
printf("\n");
    
}
printf("Second Matrix \n");
for(int i=0;i<r;i++)
{
for(int j=0;j<c;j++)
{
printf("%d\t",mat2[i][j]);
}
printf("\n");
}.  
for(int i=0;i<r;i++)
{
for(int j=0;j<c;j++)
{
sum[i][j]=mat1[i][j]-mat2[i][j];
}
}
printf("Matrix Substraction\n");
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
