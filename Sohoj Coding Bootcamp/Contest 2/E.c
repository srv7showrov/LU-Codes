

#include <stdio.h>
#include<math.h>
int main() 
{
    long long int t;
    scanf("%lld", &t);
    for(long long int i = 0; i<t; i++)
    {
        long long int a, sum = 0;
        scanf("%lld", &a);
        for(long long int i = 0; i<a; i++)
        {
            long long int n;
            scanf("%lld", &n);

            sum = sum + n;
        }

        long long int root = sqrt(sum);
        if(root*root == sum)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    printf("\n");

    return 0;
}