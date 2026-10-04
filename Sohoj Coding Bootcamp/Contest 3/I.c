

#include<stdio.h>
int main ()
{
    int n, count = 0;
    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        int val;
        scanf("%d", &val);

        if(val != 0)
        {
            count++;
        }
    }

    if(count > 0)
    {
        printf("HARD");
    }
    else
    {
        printf("EASY");
    }

    return 0;
}