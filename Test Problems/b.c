#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter first number ");
    scanf("%d",&a);
    printf("Enter second number ");
    scanf("%d",&b);
    printf("\n Addition:");
    int add=a+b;
    printf("Addition = %d",add);
    printf("\n Substraction");
    int sub=a-b;
    printf("substraction = %d",sub);
    printf("\n Multiplication");
    int mul=a*b;
    printf("multiplication = %d",mul);
    return 0;
}