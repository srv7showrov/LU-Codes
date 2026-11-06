

#include <stdio.h>
int main() {
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        float sum = 0;
        for (int j = 0; j < n; j++)
        {
            float a;
            scanf("%f", &a);
            sum = sum + a;
        }
        float av = sum / n;
        printf("Case %d: %.3f\n", i+1, av);
    }
    return 0;
}