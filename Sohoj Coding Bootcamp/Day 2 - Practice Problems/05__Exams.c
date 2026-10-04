

#include<stdio.h>
int main (){
    int t;
    scanf("%d", &t);
    for(int i=0; i<t; i++)
    {
        int x, y, z, total;
        scanf("%d %d %d", &x, &y, &z);
        total = x*y;

        if(z > total/2)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }

    }
    return 0;
}