#include <stdio.h>
int main()
{
    char a[100];
    int count = 0;
    scanf("%99s", a);
    for(int i = 0; a[i] != '\0'; i++)
    {
        if(a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
            count++;
    }
    printf("Vowels: %d", count);
    return 0;
}