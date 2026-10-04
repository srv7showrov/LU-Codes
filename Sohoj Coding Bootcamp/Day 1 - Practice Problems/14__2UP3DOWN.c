

#include<stdio.h>
int main ()
{
    int a, b, dif;
    scanf("%d %d", &a, &b);
    dif = a - b;
    if(dif >= -2 && dif <= 3)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}