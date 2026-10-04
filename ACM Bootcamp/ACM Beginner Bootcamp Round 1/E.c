

#include<stdio.h>
int main (){
    int t;
    scanf("%d",&t);

    for(int i=1; i<=t; i++)
    {
        int n;
        scanf("%d", &n);
        int run = 0;

        while(n>0)
        {
            if(n%10 != 0 || run == 1)
            {
                printf("%d", n%10);
                run = 1;
            }
            n = n/10;
        }
        printf("\n");
    }
    return 0;
}