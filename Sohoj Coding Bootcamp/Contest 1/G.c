
#include<stdio.h>

int main (){
    int n, a = 0, b = 0, maxa = 0, maxb = 0, div, counta = 0, countb = 0;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        int x, y;
        scanf("%d %d", &x, &y);

        a = a + x;
        b = b + y;

        if(a > b)
        {
            div = a - b;

            if(div > maxa)
                maxa = div;
        }
        else
        {
            div = b - a;

            if(div > maxb)
                maxb = div;
        }
    }

    if(maxa > maxb)
    {
        printf("1 %d", maxa);
    }
    else
    {
        printf("2 %d", maxb);
    }

    return 0;
}