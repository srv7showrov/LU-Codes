

#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int n500 = n/500;
    n = n%500;
    int n100 = n/100;
    n = n%100;
    int n50 = n/50;
    n = n%50;
    int n10 = n/10;
    n = n%10;
    int n5 = n/5;
    n = n%5;
    int n1 = n;
    for(int i=0; i<n1; i++)
    {
        printf("1 ");
    }
    for(int i=0; i<n5; i++)
    {
        printf("5 ");
    }
    for(int i=0; i<n10; i++)
    {
        printf("10 ");
    }
    for(int i=0; i<n50; i++)
    {
        printf("50 ");
    }
    for(int i=0; i<n100; i++)
    {
        printf("100 ");
    }
    for(int i=0; i<n500; i++)
    {
        printf("500 ");
    }
    printf("\n");
    return 0;
}