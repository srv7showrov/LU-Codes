
#include <stdio.h>
int main() {
    int a, b, x, shop1, shop2;
    scanf("%d %d %d", &a, &b, &x);
    shop1 = 12*a;
    shop2 = 12*b + x;

    if(shop1>shop2)
    {
        printf("%d", shop2);
    }
    else
    {
        printf("%d", shop1);
    }
    return 0;
}
