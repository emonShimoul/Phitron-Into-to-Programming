#include<stdio.h>
int main()
{
    int X, calc;
    scanf("%d", &X);
    calc = X/1000;
    if(calc%2 == 0){
        printf("EVEN");
    }else{
        printf("ODD");
    }
    return 0;
}