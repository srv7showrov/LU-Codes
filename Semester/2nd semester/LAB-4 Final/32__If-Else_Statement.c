#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if(a < b)
    {
        printf("Smaller: %d", a);
    }
    else
    {
        printf("Smaller: %d", b);
    }
    return 0;
}