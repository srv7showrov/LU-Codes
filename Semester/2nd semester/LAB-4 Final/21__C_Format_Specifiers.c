#include <stdio.h>
int main()
{
    int a;
    float b;
    char c;
    scanf("%d %f %c", &a, &b, &c);
    printf("Integer: %d\n", a);
    printf("Float: %.2f\n", b);
    printf("Character: %c", c);
    return 0;
}