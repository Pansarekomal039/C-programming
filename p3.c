#include<stdio.h>
int main()
{
    int i=10;
    int *p;
    p=&i;
    printf("the value of the integer variable %d\n",i);
    printf("the value of the pointer variable %p\n",(void*)p);
    printf("Pre-increment the value of the pointer variable using brackets %p\n",(void*)(p++));
    printf("the value of the pointer variable  after pre-increment %p\n",p);
    printf("the value of the pointer variable after pre-increment %p\n",(void*)p);
     printf("Pre-increment the value of the pointer variable using brackets %p\n",(void*)p++);
    printf("the value of the pointer variable  after pre-increment %p\n",p);
    printf("the value of the pointer variable after pre-increment %p\n",(void*)p);

}