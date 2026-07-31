

#include<stdio.h>
int main (){
    char ch;
    scanf("%c", &ch);

    if (ch >= 97 && ch <= 122)
    {
        printf("This is a lower case alphabet");
    }
    else if (ch >= 65 && ch <= 90)
    {
        printf("This is an upper case alphabet");
    }
    
    return 0;
}
