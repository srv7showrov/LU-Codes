

#include<stdio.h>
int main (){
    int a, b, sub, sub_wd;
    scanf("%d %d", &a, &b);

    sub = a - b;
    if(sub > 0)
    {
    sub_wd = sub - 10;
    printf("%d", sub_wd);
    }
    else if(sub <= 0)
    {
        int pos_sub = -sub;
        sub_wd = pos_sub - 10;
        printf("%d", sub_wd);
    }

    return 0;
}