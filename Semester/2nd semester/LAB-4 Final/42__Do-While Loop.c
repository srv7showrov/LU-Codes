#include <stdio.h>
int main()
{
    int n, count = 0;
    scanf("%d", &n);
    do
    {
        count++;
        n = n / 10;
    }
    while(n != 0);
    printf("Digits: %d", count);
    return 0;
}