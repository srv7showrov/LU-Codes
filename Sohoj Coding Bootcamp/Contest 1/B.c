
#include<stdio.h>
int main ()
{
    int t, reversed, digit;
    scanf("%d", &t);
    for(int i=0; i<t; i++)
    {
        int n;
        scanf("%d", &n);
        reversed = 0;
        while(n>0)
        {
            digit = n%10;
            reversed = reversed*10 + digit;
            n = n/10;
        }

        printf("%d\n", reversed);
    }
    return 0;
}