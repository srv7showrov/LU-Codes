
#include<stdio.h>
int main (){
    int i=1;

    again:
    printf("%d ", i);
    i++;
    if(i<=5)
    {
        goto again;
    }

    return 0;
}

