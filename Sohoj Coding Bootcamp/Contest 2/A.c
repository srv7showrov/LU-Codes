#include <stdio.h>
int main() {
    int t;
    scanf("%d", &t);
    for(int i=0; i<t; i++)
    {
    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++) {
        if (i%2 != 0)
        printf("%d ", a[i]);
    }
    printf("\n");
}

    return 0;
}