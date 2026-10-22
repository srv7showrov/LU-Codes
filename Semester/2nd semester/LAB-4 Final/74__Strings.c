#include <stdio.h>
int main()
{
    char a[100];
    int n = 0;
    scanf("%99s", a);
    for(int i = 0; a[i] != '\0'; i++)
    {
        n++;
    }
    for(int i = n - 1; i >= 0; i--)
    {
        printf("%c", a[i]);
    }
    return 0;
}
