

#include<stdio.h>
int main (){
    char c;
    scanf("%c", &c);

    switch(c >= '0' && c <= '9')
    {
        case 1:
        printf("Digit");
        break;

        case 0:
        switch((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        {
            case 1:
            printf("Alphabet");
            break;

            case 0:
            printf("Special character");
            break;
        }
    }
    return 0;
}