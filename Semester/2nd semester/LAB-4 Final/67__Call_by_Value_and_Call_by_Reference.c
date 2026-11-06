#include <stdio.h>
void add(int n)
{
    n = n + 5;
    printf("Inside: %d\n", n);
}
int main()
{
    int a;
    scanf("%d", &a);
    add(a);
    printf("Original: %d", a);
    return 0;
}