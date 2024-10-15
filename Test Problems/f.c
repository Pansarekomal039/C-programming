#include<stdio.h>
int main()
{
    int marks;
    printf("Enter the marks");
    scanf("%d",&marks);
    if(marks<35)
    printf("F");
    if(marks<35 && marks>40)
    printf("P");
    if(marks<40 && marks>55)
    printf("C");
    if(marks<55 && marks>65)
    printf("B");
    if(marks<65 && marks>85)
    printf("A");
    if(marks>80)
    printf("O");
    return 0;
}