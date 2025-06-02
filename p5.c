#include <stdio.h>
int main() {
    void *voidPtr = NULL;
    printf("Value of void pointer (initially NULL): %p\n", (void*)voidPtr);
    int num = 42;
    voidPtr = &num;
    printf("Value of void pointer (address of num): %p\n", (void*)voidPtr);
    printf("Value of int variable using void pointer (with typecast): %d\n", *(int*)voidPtr);
    double dbl = 3.14;
    voidPtr = &dbl;
    printf("Value of double variable using void pointer (with typecast): %f\n", *(double*)voidPtr);
    float flt = 2.71f;
    voidPtr = &flt;
    printf("Value of float variable using void pointer (with typecast): %f\n", *(float*)voidPtr);
    long int lng = 1234567890L;
    voidPtr = &lng;
    printf("Value of long int variable using void pointer (with typecast): %ld\n", *(long int*)voidPtr);
    return 0;
}

