#include<stdio.h>
int main()
{
    int arr[10],n;
    int sum=0;
    printf("Enter the number ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
     scanf("%d",&arr[i]);
     sum+=i;
    }
    printf("The sum of %d integer is %d",n,sum);
    return 0;
}