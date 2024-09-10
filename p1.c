#include<stdio.h>
int main()
{
    int i=10;
    int *p;
    p=&i;
    printf("Value of an integer variable%d\n",i);
    printf("adress of an integer variable %p\n",(void*)&i);
    printf("Value of an pinter variable%p\n",(void*)p);
    printf("adress of an pointer variable %p\n",(void*)&p);
    return 0;

}   