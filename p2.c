#include<stdio.h>
int main()
{
     int *intPtr;
      float *floatPtr;
        double *doublePtr;
          unsigned long int *unsignedLongIntPtr;
            void *voidPtr;
 
    printf("Sizeof int variable %zu\n",sizeof(intPtr));
     printf("Sizeof float variable %zu\n",sizeof(floatPtr));
      printf("Sizeof double variable %zu\n",sizeof(doublePtr));
       printf("Sizeof unsigned long variable %zu\n",sizeof(unsignedLongIntPtr));
        printf("Size of void pointer: %zu bytes\n", sizeof(voidPtr));
}