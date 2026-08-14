

#include<stdio.h>
int main (){
    int year;
    scanf("%d", &year);
    switch(((year%4 == 0) && (year%100 != 0)) || (year%400 == 0))
    {
        case 1:
        printf("This is a leap year");
        break;

        case 0:
        printf("This is not a leap year");
        break;
    }
    return 0;
}