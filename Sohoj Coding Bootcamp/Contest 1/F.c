
#include <stdio.h>
int main() {
    int t, n, sum;
    scanf("%d", &t);
    for (int i=1; i<=t; i++) {
        scanf("%d", &n);
        sum = 0;
        for (int j=n; j>0; j=j/10) 
        {
            sum = sum + j%10;
        }
        printf("%d\n", sum);
    }
    return 0;
}