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
                case 1: printf("Algebra"); break;
                case 2: printf("Geometry"); break;
                default: printf("Invalid");
            }
            break;
        case 2:
            switch(b)
            {
                case 1: printf("Physics"); break;
                case 2: printf("Chemistry"); break;
                default: printf("Invalid");
            }
            break;
        default: printf("Invalid");
    }
    return 0;
}