

#include<stdio.h>
int main (){
    int a;
    scanf("%d", &a);

    if(a>0)
    {
        printf("The number is positive.");
    }
    else if(a<0)
    {
        printf("The number is negative.");
    }
    else
    {
        printf("The number is zero.");
    }

    return 0;
}
