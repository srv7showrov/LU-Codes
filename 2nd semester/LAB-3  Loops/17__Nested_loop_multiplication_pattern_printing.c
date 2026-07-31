

#include <stdio.h>
int main()
{
    for (int i = 1; i<=5; i++)
    {
        for (int j = 1; j<=4; j++)
        {
            printf("%d ", i*j);
        }
        printf("\n");
    }

    return 0;
}


// 1 2 3 4 
// 2 4 6 8 
// 3 6 9 12 
// 4 8 12 16 
// 5 10 15 20 