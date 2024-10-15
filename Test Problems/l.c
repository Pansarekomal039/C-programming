#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the first number");
    scanf("%d",&a);
    printf("Enter the second number");
    scanf("%d",&b);
    printf("Enter the third number");
    scanf("%d",&c);
    if(a+b>c && a+c>c && b+c>a)
    {
        printf("The three integer can form the side of integer");
    }
    else
    {
        printf("The three integer can NOT form the side of integer");
    }
}