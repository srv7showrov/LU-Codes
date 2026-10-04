

#include<stdio.h>
int main ()
{
    int t;
    scanf("%d", &t);
    for(int i=0; i<t; i++)
    {
        int x, y, count = 0;
        scanf("%d %d", &x, &y);
        for(int i=1; i<=20; i++)
        {
            if(i*y <= x)
            {
                count ++;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}