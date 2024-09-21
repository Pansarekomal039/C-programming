#include<stdio.h>
int main()
{
    int num[]={2,2,1};
    int n=sizeof(num)/sizeof(num[0]);
    int i=0;
    int unique=0;
    while(i<n)
    {
     unique ^= num[i];
       i++;
    }
    printf("unique element : %d",unique);
    return 0;
}