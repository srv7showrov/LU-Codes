

#include<stdio.h>
int main ()
{
    int a, b, time, left;
    scanf("%d:%d", &a, &b);
    scanf("%d", &time);
    left = ((11-a)*60) + (15-b);
    if(time <= left)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}