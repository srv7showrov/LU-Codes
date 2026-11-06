

#include <stdio.h>
int main() {
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        int a[n];
        int max = 0, min = 0;
        for (int j = 0; j < n; j++)
        {

            scanf("%d", &a[j]);
            if (j == 0)
            {
                max = a[j];
                min = a[j];
            }
            else
            {
                if (a[j] > max)
                {
                    max = a[j];
                }
                if (a[j] < min)
                {
                    min = a[j];
                }
            }
        }
        printf("%d\n", max - min);
    }
    return 0;
}