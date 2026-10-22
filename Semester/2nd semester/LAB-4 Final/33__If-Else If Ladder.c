#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if(n < 0)
    {
        printf("Invalid Age");
    }
    else if(n <= 12)
    {
        printf("Child");
    }
    else if(n <= 19)
    {
        printf("Teenager");
    }
    else if(n <= 59)
    {
        printf("Adult");
    }
    else
    {
        printf("Senior");
    }
    return 0;
}