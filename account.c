#include<stdio.h> 
int main()  
{
    int m,n,i,j,sum=0,rowToAdd,max;
    printf("Enter the number of rows");
    scanf("%d",&m);
    printf("Enter the number of cols");
    scanf("%d",&n);
    printf("Enter Matrix Element");
    int account[m][n];
    for(i=0;i<m;i++){
        printf("Row %d : \n",i+1);
        for(j=0;j<n;j++){
            scanf("%d",&account[i][j]);
        }
    }
   
    for (i = 0; i < m; i++) {
        sum = 0;  
        for (j = 0; j < n; j++) {
            sum += account[i][j];  
        }
        printf("Sum of Row %d: %d\n", i + 1, sum);  
    }
    max=sum;
     for (i = 0; i < m; i++) { 
        for (j = 0; j < n; j++) {
           if(sum>max)
        {
            max=sum;
        } 
        }
     }
printf("maximum value from given array is : %d\n",max);
    return 0;
}
