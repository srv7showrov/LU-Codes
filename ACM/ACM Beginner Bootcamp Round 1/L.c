

#include<stdio.h>
int main (){
    int t;
    scanf("%d", &t);

    for(int i=1; i<=t; i++)
    {
        int n, j, max;
        scanf("%d", &n);
        for(j=1; j<=n; j++)
        {
            if(j*j <= n)
            {
                max=j;
            }
        }
        printf("%d\n", max);
    }
    return 0;
}