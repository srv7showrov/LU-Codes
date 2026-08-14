
 // 20-07-2026

 
#include<stdio.h>
int main (){
    int a, b;
    scanf("%d %d", &a, &b);
    switch(a>b)
    {
        case 1:
        printf("%d is maximum", a);
        break;

        case 0:
        switch(a<b)
        {
            case 1:
            printf("%d is maximum", b);
            break;

            case 0:
            printf("%d and %d are same numbers", a, b);
        }
    }
    return 0;
}