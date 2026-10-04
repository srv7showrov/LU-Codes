

#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        long long int a, b;
        scanf("%lld %lld", &a, &b);
        printf("%lld %lld\n", ((a >= b) ? a : b), a + b);
    }
    return 0;
}