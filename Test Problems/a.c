#include<stdio.h>
int main()
{
    char str[30];
    int age;
    char homeT;
    printf("Enter Your Full name: ");
    fgets(str,sizeof(str),stdin);
    printf("\nEnter Your age: ");
    scanf("%d",&age);
    printf("\nEnter Your HomeTown:");
    scanf(" %c\n",&homeT);
    printf("\n the full name is : %s ",str);
    printf("\n age is : %d",age);
    printf("\n  the hometown is : %c",homeT);

    return 0;

}
