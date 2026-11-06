#include <stdio.h>
struct Book
{
    char title[50];
    char author[50];
    float price;
};
int main()
{
    int n, max = 0;
    scanf("%d", &n);
    struct Book a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%s %s %f", a[i].title, a[i].author, &a[i].price);
    }
    for(int i=1; i<n; i++)
    {
        if(a[i].price > a[max].price)
        {
            max = i;
        }
    }
    printf("Title: %s\n", a[max].title);
    printf("Author: %s\n", a[max].author);
    printf("Price: %.2f\n", a[max].price);
    return 0;
}