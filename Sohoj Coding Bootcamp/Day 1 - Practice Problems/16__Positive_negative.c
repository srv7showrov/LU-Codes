

#include<stdio.h>
int main (){
    int a;
    scanf("%d", &a);

    if(a>0)
    {
        printf("The is a positive number.");
    }
    else if(a<0)
    {
        printf("The is a negative number.");
    }
    else
    {
        printf("The number is zero.");
    }

    return 0;
}
