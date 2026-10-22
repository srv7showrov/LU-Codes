#include <stdio.h>
int main()
{
    float b, h, a;
    // Input base and height
    scanf("%f %f", &b, &h);
    // Calculate area
    a = 0.5 * b * h;
    // Display result
    printf("Area: %.2f", a);
    return 0;
}