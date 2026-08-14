

#include<stdio.h>
int main (){
    int t, count1, count2;
    scanf("%d", &t);

    for(int i=1; i<=t; i++)
    {
        int n;
        scanf("%d", &n);
        
        if(n%2 == 0)
        {
            count1++;
        }
        else
        {
            count2++;
        }
    }
    if(count1 <= count2)
    {
        printf("NOT READY");
    }
    else{
        printf("READY FOR BATTLE");
    }
    return 0;
}