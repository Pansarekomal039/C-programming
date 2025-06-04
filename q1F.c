#include<stdio.h>
int main()
{
    int i,arr[10];
    int count=0;
    printf("Enter the number");
    scanf("%d",&arr[10]);
    printf("The numbers are ");
    for(i=0;i<=arr[i];i++)
    {
        printf("%d\n",arr[i]);
    } 
    for(i=0;i<=arr[i];i++)
    {
    if(arr[i]%2!=0)
    {
       count++;
    }
}
    printf("the odd count = %d",count);
    return 0;
}