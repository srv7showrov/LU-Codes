#include <stdio.h>
int main()
{
    for(int i = 1; i <= 12; i++)
    {
        if(i == 3)
        {
            continue;
        }
        printf("%d ", i);
    }
    return 0;
}

// Using goto:

#include <stdio.h>
int main()
{
    int i = 1;
    start:
    if(i > 12)
    {
        goto end;
    }
    if(i == 3)
    {
        i++;
        goto start;
    }
    printf("%d ", i);
    i++;
    goto start;
    end:
    return 0;
}