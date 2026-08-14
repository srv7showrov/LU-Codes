

#include<stdio.h>
int main (){
    char c;
    scanf("%c", &c);
    switch(c>='a' && c<='z')
    {
        case 1:
        printf("Lowerclass Alphabet");
        break;

        case 0:
        switch(c>='A' && c<='Z')
        {
            case 1:
            printf("Upperclass Alphabet");
            break;

            case 0:
            printf("That's not an alphabet bro");
            break;
        }
    }
    return 0;
}