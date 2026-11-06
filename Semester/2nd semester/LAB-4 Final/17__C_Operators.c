#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("Sum: %d\n", a + b);
    printf("Difference: %d\n", a - b);
    printf("Product: %d\n", a * b);
    if(b != 0)
    {
        printf("Remainder: %d", a % b);
    }
    else
    {
        printf("Remainder is undefined");
    }
    return 0;
}