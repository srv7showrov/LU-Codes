#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);

    switch (a != 0)
    {
    case 1:
        switch (a>0)
        {
        case 1:
            printf("positive");
            break;

        case 0:
            printf("negative");
            break;
        }
        break;

    default:
        printf("zero");
        break;
    }

    return 0;
}
