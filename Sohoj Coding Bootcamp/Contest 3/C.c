

#include<stdio.h>
int main ()
{
    int t;
    scanf("%d", &t);

    for(int i=0; i<t; i++)
    {
        long long int a, b;
        scanf("%lld %lld", &a, &b);

        if((a + b) % 3 == 0 && a <= 2 * b && b <= 2 * a)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}