#include <stdio.h>
int main()
{
    int n, sum = 0;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if(a[i] % 2 == 0)
        {
            sum += a[i];
        }
    }
    printf("Sum: %d", sum);
    return 0;
}