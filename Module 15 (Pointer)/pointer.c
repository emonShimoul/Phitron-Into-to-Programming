#include<stdio.h>
int main()
{
    int x=10;
    printf("%d\n",x);
    // printf("%p\n",&x);

    int* ptr;  // declaring a pointer variable

    ptr = &x;  // set the address of a variable into pointer variable

    // printf("%p\n",ptr);
    // printf("%p\n",&ptr);
    printf("%d\n",*ptr); // dereferencing a pointer

    *ptr = 200; // dereferencing a pointer

    printf("%d\n",x);

    return 0;
}