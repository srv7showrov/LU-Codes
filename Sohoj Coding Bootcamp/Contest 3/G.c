
#include<stdio.h>
int main (){    
    int n, div, mul, dif;
    scanf("%d", &n);

    if(n<=5)
    {
        printf("1");
    }
    else
    {
        div = n/5;

        if(n%5 == 0 )
        {
            printf("%d", div);
        }
        else
        {
            printf("%d", div+1);

        }
    }
    
    return 0;
}