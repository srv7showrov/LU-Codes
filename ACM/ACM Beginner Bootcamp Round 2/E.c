

#include<stdio.h>
int main ()
{
    int n, b=64;
    scanf("%d", &n);
    for(int row=n; row>=1; row--)
    {
        for(int col=1; col<=row; col++)
        {
            printf("%c", col + b);
        }
        b++;
        printf("\n");
    }
    return 0;
}