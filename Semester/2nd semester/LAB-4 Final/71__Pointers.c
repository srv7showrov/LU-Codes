#include <stdio.h>
int main()
{
    int n;
    int *p = &n;
    scanf("%d", &n);
    printf("Value: %d\n", *p);
    printf("Address: %p", (void *)p);
    return 0;
}