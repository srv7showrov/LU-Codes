

#include<stdio.h>
int main ()
{
    int t;
    scanf("%d",&t);
    int count = 0;
    for(int i=0;i<t;i++)
    {
        int n;
        scanf("%d", &n);
        if(n>=80)
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}