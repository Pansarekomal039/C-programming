#include<stdio.h>
int main()
{
    float a,b,c;
    printf("Enter the first number");
    scanf("%f",&a);
    printf("Enter the second number");
    scanf("%f",&b);
    printf("Enter the constant");
    scanf("%f",&c);
    float discriminent= b*b-4*a*c;
    if(discriminent<0){
    printf("linear eq is not valid");
    }
    else
    {
   float res1=-b+sqrt(discriminent)/2*a;
    float res2=-b+sqrt(discriminent)/2*a;
    printf("%f",res1);
    printf("%f",res2);
    return 0;
    }



}