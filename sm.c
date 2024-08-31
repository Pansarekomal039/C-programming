#include<stdio.h>
int main()
{ int i;
    for(i=1;i<=50;i++)
    {
        if(i%2==0)
        { 
            int sum=0;
            sum+=i;
            printf("%d",sum);
        }
    }
    return 0;
}
