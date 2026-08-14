

#include<stdio.h>
int main (){
    int t;
    scanf("%d",&t);

    for(int i=1; i<=t; i++)
    {
        int n, last, first;
        scanf("%d", &n);

        last = n%10;
        while(n >= 10)
        {
            n = n/10;
        }

        first = n;

        printf("%d\n", first + last);
    }
    return 0;
}