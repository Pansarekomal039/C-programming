#include<stdio.h> 
int main()
{ 
    int size,i,largest,n;
    printf("Enter size of array");
    scanf("%d",&size);
    int array[size];
    printf("enter element of array");
    for(i=0;i<size;i++)
    {         
        scanf("%d",&array[i]);
    }
        largest=array[0];
        for(i=0;i<size;i++)
        {
            if(largest <array[i])
            largest=array[i];
        }
        printf("largest element in array is%d",largest);
        return 0;
    
}

