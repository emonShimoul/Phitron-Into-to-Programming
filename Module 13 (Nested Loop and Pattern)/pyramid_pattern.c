#include<stdio.h>
int main()
{
    int n, star=1;
    scanf("%d",&n);
    int space=n-1;
    for (int i = 1; i <= n; i++) // for printing line
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        for(int j=1; j <= star; j++)  // for printing *
        {
            printf("*");
        }
        printf("\n");
        star+=2;
        space--;
    }
    return 0;
}