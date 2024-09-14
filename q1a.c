#include<stdio.h>
int main()
{
    int num[]={2,7,11,5};
    int target=9;
    int n=sizeof(num)/sizeof(num[0]);
    int i=0;
    while(i<n)
    {
        int j=i+1;
        while(j<n)
        {
            if(num[i]+num[j]==target)
            {
                printf("%d+%d=%d",num[i],num[j],target);
            }
            j++;
        }
        i++;
    }
    return 0;
}