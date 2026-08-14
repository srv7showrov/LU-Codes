

#include<stdio.h>
int main (){
    int t;
    scanf("%d", &t);
    for(int i=1; i<=t; i++)
    {
        int a, b, c, max, max2;
        scanf("%d %d %d", &a, &b, &c);

        if(a>b && a>c)
        {
            if(b>c)
            {
                printf("%d\n", b);
            }
            else
            {
                printf("%d\n", c);
            }
        }
        else if(b>a && b>c)
        {
            if(a>c)
            {
                printf("%d\n", a);
            }
            else
            {
                printf("%d\n", c);
            }
        }
        else if(c>a && c>b)
        {
            if(a>b)
            {
                printf("%d\n", a);
            }
            else
            {
                printf("%d\n", b);
            }
        }
    }
    return 0;
}

