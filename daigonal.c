#include<stdio.h>
#define MAXROW 10
#define MAXCOL 10
int main()
{
    int r,c,i,j;
    int mat[MAXROW][MAXCOL];
    printf("Enter the row of matrix;");
    scanf("%d",&r);
    printf("Enter the col of matrix");
    scanf("%d",&c);
    printf("Enter Matrix Element");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    printf("\n Matrix");
    printf("\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }
    int sum=0;
     for(i=0;i<r;i++)
    {   
                sum+=mat[i][i];
            }
            printf("%d",sum);
}