#include<stdio.h>
int main()
{
    int base,height;
    printf("Enter the base");
    scanf("%d",&base);
     printf("Enter the height");
    scanf("%d",&height);
    printf("base=%d\n",base);
    printf("height=%d\n",height);
    int areaT=1/2*base*height;
    printf("Area of traingle is %d\n",areaT);

}