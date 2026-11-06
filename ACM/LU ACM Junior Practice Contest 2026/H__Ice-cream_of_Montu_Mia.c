

#include<stdio.h>
int main ()
{
    int n, a, b, c;
    scanf("%d %d %d %d", &n, &a, &b, &c);
    if(n-a >= 10 || n-b >= 10 || n-c >= 10)
    {
        printf("Yes :-D\n");
    }
    else
    {
        printf("No :-(\n");
    }
    return 0;
}