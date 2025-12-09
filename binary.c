#include<stdio.h 
int main()
{
    int i,j,n,m; 
    int mat[10][10]; 
    printf("Enter the row of matrix;");
    scanf("%d",&m);
    printf("Enter the col of matrix");
    scanf("%d",&n); 
    printf("Enter Matrix Element");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    printf("\n Matrix");
    printf("\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<m;i++){
        if(m[i]==1)
        {
        max=m[i];
        max++;
        }
    }
}
