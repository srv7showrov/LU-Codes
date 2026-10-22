#include <stdio.h>
int main()
{
    int s;
    float l, w, a, b;
    scanf("%d", &s);
    scanf("%f %f", &l, &w);
    a = s * s;
    b = l * w;
    printf("Area of Square: %.2f\n", a);
    printf("Area of Rectangle: %.2f", b);
    return 0;
}