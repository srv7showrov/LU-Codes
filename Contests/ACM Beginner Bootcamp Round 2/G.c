

#include<stdio.h>
int main ()
{
    int t;
    scanf("%d", &t);

    for(int i=1; i<=t; i++)
    {
        int n;
        scanf("%d", &n);

        char alpha = 'A';
        for(int row=1; row<=n; row++)
        {
            for(int col=1; col<=n-row; col++)
            {
                printf(" ");
            }
            
            for(int col=1; col<=row; col++)
            {
                printf("%c", alpha);
                alpha++;

                if(alpha > 'Z')
                {
                    alpha = 'A';
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}