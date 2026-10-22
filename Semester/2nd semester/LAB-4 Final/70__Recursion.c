#include <stdio.h>
void show(int n)
{
    if(n == 0)
        return;
    show(n - 1);
    printf("%d ", n);
}
int main()
{
    int n;
    scanf("%d", &n);
    show(n);
    return 0;
}