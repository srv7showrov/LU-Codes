

#include <stdio.h>
int main()
{
    for (int i=0; i<=4; i++)
    {
        if (i == 4) 
        break;
        printf("%d ", i);
    }
    printf("\n");

    for (int i=0; i<=4; i++)
    {
        if (i==3) 
        continue;
        printf("%d ", i);
    }
    printf("\n");

    for (int i=0; i<=4; i++)
    {
        if (i==4) 
        break;
        printf("%d ", i);
    }
    printf("\n");
    goto level;
    level:
    printf("Jumped to exit!");
    return 0;
}


// 0 1 2 3 
// 0 1 2 4 
// 0 1 2 3 
// Jumped to exit!