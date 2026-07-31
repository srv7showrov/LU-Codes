#include <stdio.h>

int main()
{
    char c;
    scanf("%c", &c);
    switch ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
    {
    case 1:
        switch ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        {
        case 1:
            switch (c >= 'a' && c <= 'z')
            {
            case 1:
                printf("is lowercase alphabet");
                break;

            case 0:
                printf("is uppercase alphabet");
                break;
            }
            break;

        case 0:
            printf("digit");
            break;
        }
        break;
    case 0:
        printf("special");
        break;
    }

    return 0;
}