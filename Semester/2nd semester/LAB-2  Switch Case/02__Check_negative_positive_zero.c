

#include<stdio.h>
int main (){
    int a;
    scanf("%d", &a);

    switch(a==0)
    {
        case 1:
        printf("The number is zero");
        break;

        case 0:
        switch(a>0)
        {
            case 1:
            printf("%d is a positive number", a);
            break;

            case 0:
            printf("%d is a negative number", a);
            break;
        }
    }
    return 0;
}

/////   Or

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