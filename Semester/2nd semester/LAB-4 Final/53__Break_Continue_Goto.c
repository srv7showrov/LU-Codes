#include <stdio.h>
int main()
{
    for(int i = 1; i <= 15; i++)
    {
        if(i == 11)
        {
            break;
        }
        printf("%d ", i);
    }
    return 0;
}