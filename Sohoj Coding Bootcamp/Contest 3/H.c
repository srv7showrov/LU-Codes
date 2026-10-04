

#include <stdio.h>
int main() {
    int k, n, w, total=0;
    scanf("%d %d %d", &k, &n, &w);

    for(int i=1; i<=w; i++)
    {
        total = total + i*k;
    }

    if(total <= n)
    {
        printf("0");
    }
    else
    {
        printf("%d", total-n);
    }
    return 0;
}