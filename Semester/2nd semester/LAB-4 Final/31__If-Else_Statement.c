#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if(n >= 0)
    {
        printf("Non-negative");
    }
    else
    {
        printf("Negative");
    }
    return 0;
}