

#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        int n, rem;
        scanf("%d", &n);

        for(int j=1; j <= n/4; j++)
        {
            int extra;
            rem = n % j*j;
            if(rem> n - (n / (j*j)))
            {
                extra = rem;
            }
            printf("%d\n", extra);
        }
        
    }
    return 0;
}