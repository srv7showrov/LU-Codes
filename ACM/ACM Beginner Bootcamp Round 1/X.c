

#include<stdio.h>
int main (){
    int t;
    scanf("%d", &t);
    for(int i=1; i<=t; i++)
    {
        char c;
        scanf(" %c", &c);

        if(c == 'B' || c == 'b')
        {
            printf("BattleShip\n");
        }
        else if(c == 'C' || c == 'c')
        {
            printf("Cruiser\n");
        }
        else if(c == 'D' || c == 'd')
        {
            printf("Destroyer\n");
        }
        else if(c == 'F' || c == 'f')
        {
            printf("Frigate\n");
        }
    }
    return 0;
}