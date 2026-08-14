

#include<stdio.h>
int main (){
    int t;
    scanf("%d", &t);

    for(int i=1; i<=t; i++)
    {
        int n;
        long long int fact=1;
        scanf("%d", &n);
        for(int j=1; j<=n; j++)
        {
            fact=fact*j;
        }
        printf("%lld\n", fact);
    }
    return 0;
}

