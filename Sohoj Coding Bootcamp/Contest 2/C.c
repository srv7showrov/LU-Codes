#include <stdio.h>
int main() 
{
    int n, d;
    scanf("%d %d", &n, &d);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n-1; i++)
    {
        if(a[i+1] - a[i] <= d)
        {
            printf("%d", a[i+1]);
            return 0;
        }
    }
    
    printf("-1");

    return 0;
}