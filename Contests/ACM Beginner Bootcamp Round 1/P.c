

#include<stdio.h>
int main (){
    int t;
    scanf("%d",&t);

    for(int i=1; i<=t; i++)
    {
        int n, original, reverse = 0, digit;
        scanf("%d", &n);

        original = n;

        while(n>0)
        {
            digit = n%10;
            reverse = reverse * 10 + digit;
            n = n/10;
        }
        if(original == reverse)
        {
            printf("wins\n");
        }
        else
        {
            printf("loses\n");
        }

        printf("\n");
    }
    return 0;
}