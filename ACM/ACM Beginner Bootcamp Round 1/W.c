

#include<stdio.h>
int main (){
    int t;
    scanf("%d",&t);

    for(int i=1; i<=t; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);

        double total = a*b, new_a, new_b;
        if(a<=1000 && b<=1000)
        {
            printf("%lf\n", total);
        }
        else
        {
            if(a>1000 && b<=1000)
            {
                new_a = a-(a*0.1);
                printf("%lf\n", new_a*b);
            }
            else if(a<=1000 && b>1000)
            {
                new_b = b-(b*0.1);
                printf("%lf\n", a*new_b);
            }
            else if(a>1000 && b>1000)
            {
                new_a = a-(a*0.1);
                new_b = b-(b*0.1);
                printf("%lf\n", new_a*new_b);
            }
        }
    }
    return 0;
}