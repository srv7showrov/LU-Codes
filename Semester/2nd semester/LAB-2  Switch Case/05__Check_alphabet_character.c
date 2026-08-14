

#include<stdio.h>
int main (){
    char c;
    scanf("%c", &c);
    switch((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
        case 1:
        printf("It is an alphabet");
        break;

        case 0:
        printf("This is not an alphabet");
        break;
    }
    return 0;
}