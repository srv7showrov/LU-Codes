

#include <stdio.h>
int main()
{
    int n, k, count=0;
    scanf("%d %d\n", &n, &k);
    for (int i = 1; i <= n; i++)
    {
        int a;
        scanf("%d\n", &a);

        if(a%k == 0)
        {
            count = count + 1;
        }
    }
    printf("%d", count);
    return 0;
}