

#include<stdio.h>
int main (){
    int x, code;
    scanf("%d", &x);
    code = x%100;
    if(code == 0)
    {
        printf("K00");
    }
    else if(code < 10)
    {
        printf("K0%d", code);
    }
    else
    {
        printf("K%d", code);
    }
    
    return 0;
}