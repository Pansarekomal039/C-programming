#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter the first number");
    scanf("%d",&num1);
    printf("Enter the second  number");
    scanf("%d",&num2);
    if(num1%num2==0)
    printf("even");
    else
    printf("odd");
    return 0;
}