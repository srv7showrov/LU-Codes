#include <stdio.h>
int main()
{
    int n;
    float a, b;
    scanf("%d", &n);
    switch(n)
    {
        case 1:
            scanf("%f", &a);
            printf("Square: %.2f", a * a);
            break;
        case 2:
            scanf("%f %f", &a, &b);
            printf("Rectangle: %.2f", a * b);
            break;
        default:
            printf("Invalid");
    }
    return 0;
}