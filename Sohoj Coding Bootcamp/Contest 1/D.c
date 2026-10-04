

#include <stdio.h>
int main() {
    int t;
    scanf("%d", &t);
    for(int i=0; i<t; i++)
    {
        long long n, k, s;

        scanf("%lld %lld %lld", &n, &k, &s);

        long long repeat = (s - n*n) / (k - 1);

        printf("%lld\n", repeat);
    }
    return 0;
}