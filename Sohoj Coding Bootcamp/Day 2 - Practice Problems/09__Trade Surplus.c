

#include<stdio.h>
int main ()
{
    int t;
    scanf("%d", &t);
    for(int i=0; i<t; i++)
    {
        int a, b, c, d, total;
        scanf("%d %d %d %d", &a, &b, &c, &d);
        total = (a-b) + (c-d);
        if(total >= 0)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
    }
    return 0;
}