#include <stdio.h>
void add(int *n)
{
    *n = *n + 10;
}
int main()
{
    int a;
    scanf("%d", &a);
    add(&a);
    printf("Updated: %d", a);
    return 0;
}