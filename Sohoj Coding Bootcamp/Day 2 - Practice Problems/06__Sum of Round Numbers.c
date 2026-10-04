
#include<stdio.h>
int main (){
    int t;
    scanf("%d", &t);
    for(int i=0; i<t; i++)
    {
        int n;
        scanf("%d", &n);
        int temp = n, place = 1, count = 0;

        while(temp>0)
        {
            if(temp%10 != 0)
            {
                count++;
            }
            temp = temp/10;
        }
        printf("%d\n", count);

        temp = n;

        while(temp>0)
        {
            int digit = temp%10;

            if(digit != 0)
            {
                printf("%d ", digit*place);
            }

            temp = temp/10;
            place = place*10;
        }

        printf("\n");
    }
    return 0;
}
