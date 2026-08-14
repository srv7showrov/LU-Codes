

#include<stdio.h>
int main ()
{
    int t;
    scanf("%d", &t);

    for(int i=1; i<=t; i++)
    {
        int n;
        scanf("%d", &n);

        for(int row=1; row<=n; row++)
        {
            for(int col=1; col<=n; col++)
            {
                if(col%2 != 0)
                {
                    printf(".");
                }
                else
                {
                    printf("x");
                }
            }
            printf("\n");
        }
        printf("\n");
    }
}