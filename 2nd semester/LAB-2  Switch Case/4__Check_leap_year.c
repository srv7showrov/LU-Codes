#include <stdio.h>

int main()
{
    int year;
    scanf("%d", &year);

    switch (((year%4 == 0) && (year%100 != 0)) || (year%400 == 0))
    {
    case 1:
        printf("is leap year");
        break;

    case 0:
        printf("is not leap year");
        break;
    }

    return 0;
}