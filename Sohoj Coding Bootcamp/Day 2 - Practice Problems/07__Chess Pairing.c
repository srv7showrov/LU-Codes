
#include<stdio.h>
int main ()
{
    int t;
    scanf("%d", &t);
    for(int i=0; i<t; i++)
    {
        int n, x, unrated, minr;
        scanf("%d %d", &n, &x);
        unrated = 2*n - x;
        minr = 2*(x-n);

        if(x <= unrated)
        {
            printf("0\n");
        }
        else
        {
            printf("%d\n", minr);
        }
    }
    return 0;
}