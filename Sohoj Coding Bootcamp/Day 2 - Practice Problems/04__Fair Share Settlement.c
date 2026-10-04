

#include<stdio.h>
int main (){
    int t;
    scanf("%d", &t);
    for(int i=0; i<t; i++)
    {
        int n, k, average, pay;
        scanf("%d %d", &n, &k);
        average = n/(k+1);
        pay = n - average*k;

        printf("%d\n", pay);

    }
    return 0;
}