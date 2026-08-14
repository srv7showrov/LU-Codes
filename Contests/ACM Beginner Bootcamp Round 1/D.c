

#include<stdio.h>
int main (){
    int t;
    scanf("%d",&t);

    for(int i=1; i<=t; i++)
    {
        int n, sum = 0;
        scanf("%d", &n);

        while(n>0)
        {
            sum = sum + n%10;
            n = n/10;
        }
        printf("%d\n", sum);
    }
    return 0;
}