

#include<stdio.h>
int main ()
{
    int t;
    scanf("%d", &t);

    for(int i=1; i<=t; i++)
    {
        int k;
        scanf("%d", &k);

        for(int row=1; row<=k; row++)
        {
            for(int col=1; col<=k-row; col++)
            {
                printf(" ");
            }
            for(int col=1; col<=row*2-1; col++)
            {
                if(col == 1 || col == row*2-1 || row == k)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
    return 0;
}
