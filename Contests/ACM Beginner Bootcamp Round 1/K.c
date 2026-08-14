

#include<stdio.h>
int main (){
    int t;
    scanf("%d", &t);

    for(int i=1; i<=t; i++)
    {
        long long int a, b;
        scanf("%lld %lld", &a, &b);

        if(a>b)
        {
            printf(">\n");
        }
        else if(a<b)
        {
            printf("<\n");
        }
        else
        {
            printf("=\n");
        }
    }
    return 0;
}