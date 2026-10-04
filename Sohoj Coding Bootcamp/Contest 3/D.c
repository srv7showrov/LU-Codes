

#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int a[2][2];
        scanf("%d %d", &a[0][0], &a[0][1]);
        scanf("%d %d", &a[1][0], &a[1][1]);

        int count = 0;

        for (int r = 0; r < 4; r++)
        {
            if (a[0][0] < a[0][1] && a[1][0] < a[1][1] && a[0][0] < a[1][0] && a[0][1] < a[1][1])
            {
                count = 1;
                break;
            }

            int temp = a[0][0];
            a[0][0] = a[1][0];
            a[1][0] = a[1][1];
            a[1][1] = a[0][1];
            a[0][1] = temp;
        }

        if (count>0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

return 0;
}