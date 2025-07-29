#include<stdio.h>
int main()
{
    int a[5] = {10,20,30,40,50};
    printf("%p\n", &a[0]);
    printf("%p\n", &a[1]);
    printf("%p\n", &a[2]);
    printf("%p\n", &a[3]);
    printf("%p\n", &a[4]);
    printf("Array name: %p\n", a);
    printf("Array value: %d\n", *a);
    *(a) = 200;
    *(a+2) = 800;
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",a[i]);
    }
    
    return 0;
}