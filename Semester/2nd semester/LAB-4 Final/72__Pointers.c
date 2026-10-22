#include <stdio.h>
int main()
{
    int a, b;
    int *p = &a, *q = &b;
    scanf("%d %d", &a, &b);
    *p = *p + 5;
    *q = *q + 5;
    printf("%d %d", a, b);
    return 0;
}