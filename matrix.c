#include<stdio.h> 
void main()
{ 
    int r,c, i,j,mat[10][10];
    printf("enter no of rows");
    scanf("%d",&r);
    printf("enter no of cols");
    scanf("%d",&c);
    printf("Enter the actual a matrix element ");
    for( i=0;i<r;i++)
    {
        for ( j=0;j<c;j++)
        {
            scanf("%d",&mat[r][c]);
        }
    }
     printf("matrix is");
     for(i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            printf("%d\t",mat[r][c]);
        }
    }
    
    printf("\n");
}
   
   
