#include <stdio.h>
int main()
{
    float r, a;
    scanf("%f", &r);
    a = (3.1416 * r * r) / 2;
    printf("Area: %.2f", a);
    return 0;
}