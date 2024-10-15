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
    int n1=a*a;
    int n2=b*b;
    int n3=c*c;
    if(n1+n2==n3)
    printf("the three int form pythagorean triplet");
    else
    printf("NOT");
    return 0;
}
