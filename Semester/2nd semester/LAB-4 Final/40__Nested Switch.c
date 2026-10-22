#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    switch(a)
    {
        case 1:
            switch(b)
            {
                case 1: printf("Chess"); break;
                case 2: printf("Carrom"); break;
                default: printf("Invalid");
            }
            break;
        case 2:
            switch(b)
            {
                case 1: printf("Football"); break;
                case 2: printf("Cricket"); break;
                default: printf("Invalid");
            }
            break;
        default: printf("Invalid");
    }
    return 0;
}