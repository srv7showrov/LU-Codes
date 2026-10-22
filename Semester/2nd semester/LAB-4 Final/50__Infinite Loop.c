#include <stdio.h>
int main()
{
    int n;
    do
    {
        printf("Welcome\n");
        printf("Enter 0 to exit: ");
        scanf("%d", &n);
    }
    while(n != 0);
    return 0;
}