#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if(n >= 40)
    {
        printf("Passed\n");
        if(n >= 80)
        {
            printf("Scholarship Eligible");
        }
    }
    else
    {
        printf("Failed");
    }
    return 0;
}