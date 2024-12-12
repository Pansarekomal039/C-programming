#include<stdio.h>
int main()
{
    float pi=3.14;
    float area;
    int rad;
    printf("Enter the readius of the circle : ");
    scanf("%d",&rad);
    area=pi*rad*rad;
    printf("area of the circle is %f",area);

}