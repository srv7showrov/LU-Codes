

#include<stdio.h>
int main ()
{
    int n;
    scanf("%d", &n);
    for(int row=1; row<=n*2-1; row++)
    {
        for(int col=1; col<=n*2-1; col++)
        {
            if(col == row || row + col == n*2)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}