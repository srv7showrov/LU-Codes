
 // 20-07-2026

 
#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    switch (a>=b)
    {
    case 1:
        printf("%d is maximum", a);
        break;

    default:
        printf("%d is maximum", b);
        break;
    }

    return 0;
}