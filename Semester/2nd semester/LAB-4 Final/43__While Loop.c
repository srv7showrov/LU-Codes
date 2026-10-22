#include <stdio.h>
int main()
{
    int n, i = 2;
    scanf("%d", &n);
    while(i <= n)
    {
        printf("%d ", i);
        i += 2;
    }
    return 0;
}