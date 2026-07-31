

#include<stdio.h>
int main (){
    char ch;
    scanf("%c", &ch);

    if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
    {
        printf("This is an alphabet");
    }
    else
    {
        printf("This is not an alphabet");
    }
    
    return 0;
}