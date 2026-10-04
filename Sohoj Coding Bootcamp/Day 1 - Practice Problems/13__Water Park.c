

#include<stdio.h>
int main (){
    int a, b;
    scanf("%d %d", &a, &b);
    if(a>=60 && b<=130)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}