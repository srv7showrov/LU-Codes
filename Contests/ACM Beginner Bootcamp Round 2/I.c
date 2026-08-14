



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
            for(int col=1; col<=row; col++)
            {
                if(col==1)
                {
                    printf("%d", col);
                }
                else if(col>1)
                {
                    for(int i=2; i<=col; i++)
                    {
                        printf("*");
                    }
                    printf("%d", col);
                }
            }
            printf("\n");
        }
    }
    return 0;
}

