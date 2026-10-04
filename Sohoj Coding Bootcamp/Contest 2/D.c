
#include <stdio.h> 
int main()  
{ 
    long long int n, sum1 = 0; 
    scanf("%lld", &n); 
    long long sum = n * (n + 1) / 2;
    for (long long int i = 1; i <= n-1; i++) 
    {      
        long long int a;
        scanf("%lld", &a);
        sum1 = sum1 + a;
    }
    long long int dif = sum - sum1;
 
    printf("%lld", dif);

    return 0; 
}