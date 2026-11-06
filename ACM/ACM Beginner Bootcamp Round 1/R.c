

#include<stdio.h>
int main (){
    int x;
    float y, after_transaction, balance;
    scanf("%d %f", &x, &y);
    if(x%5 != 0 || x + 0.50 >y)
    {
        printf("%.2f\n", y);
    }
    else if(x%5 == 0)
    {
        after_transaction = y-x;
        balance = after_transaction-0.5;
        printf("%.2f\n", balance);
    }
    return 0;
}