

#include <stdio.h>
int main() {
    int a, b, div, diva;
    scanf("%d %d", &a, &b);
    div = a-b;
    diva = div/2;
    if(div%2 == 0)
    {
        printf("%d", diva);
    }
    else
    {
        printf("-1");
    }
    return 0;
}