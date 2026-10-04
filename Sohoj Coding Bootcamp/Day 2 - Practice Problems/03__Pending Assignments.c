
#include<stdio.h>
int main (){
    int t;
    scanf("%d", &t);
    for(int i=0; i<t; i++)
    {
        int x, y, z, need, req;
        scanf("%d %d %d", &x, &y, &z);
        need = x*y;
        req = z*24*60;

        if(need < req || need == req)
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