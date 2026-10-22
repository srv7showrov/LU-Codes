#include <stdio.h>
int mul(int a, int b)
{
    return a * b;
}
int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    printf("Product: %d", mul(x, y));
    return 0;
}