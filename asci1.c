#include<stdio.h>
int main()
{
    char str[100];
    int i=0;
    printf("Enter the string");
    scanf("%c",&str);
     while (str[i] != '\0') {
        int asciiValue = (int)str[i];
         printf("Character: %c, ASCII value: %d\n", str[i], asciiValue); 
        i++;
}
return 0;
} while(fscanf(file,"%d",&array[i])!=EOF)
    {
        i++;
    }