

#include <stdio.h>
#include <math.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++)
    {
        int r;
        scanf("%d", &r);

        int x1, y1, x2, y2, x3, y3;
        scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);

        double x = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
        double y = sqrt(((x3 - x2) * (x3 - x2)) + ((y3 - y2) * (y3 - y2)));
        double z = sqrt(((x3 - x1) * (x3 - x1)) + ((y3 - y1) * (y3 - y1)));

        if ((x <= r && y <= r && z <= r) || ((x <= r || y <= r) && z <= r) || (x <= r && (y <= r || z <= r)) || ((x <= r || z <= r) && y <= r))
        {
            printf("yes\n");
        }
        else
        {
            printf("no\n");
        }
    }
    return 0;
}