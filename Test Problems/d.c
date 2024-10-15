#include<stdio.h>
int main()
{
    float num1,num2;
    printf("Enter the first floating number");
    scanf("%f",&num1);
    printf("Enter the second floating number");
    scanf("%f",&num2);
    if(num1==num2)
    printf("Equal");
    else
    printf("Not Equal");
    return 0;
}