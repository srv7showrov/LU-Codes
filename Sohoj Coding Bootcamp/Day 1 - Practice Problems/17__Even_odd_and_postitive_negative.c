

#include<stdio.h>
int main (){
    int a;
    scanf("%d", &a);

    if(a>0)
    {
        printf("The is a positive number.\n");
    }
    else if(a<0)
    {
        printf("The is a negative number.\n");
    }
    else
    {
        printf("The number is zero.\n");
    }

    if (a%2 == 0)
    {
        printf("As well as an Even number.\n");
    }
    else
    {
        printf("As well as an Odd number.\n");
    }

    return 0;
}