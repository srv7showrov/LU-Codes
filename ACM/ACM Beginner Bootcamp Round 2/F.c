


#include<stdio.h>
int main ()
{
    int n;
    scanf("%d", &n);

    for(int row=1; row<=n; row++)
    {
        for(int col=1; col<=n-row; col++)
        {
            printf(" ");
        }

        int first = row;
        for(int col=1; col<=row*2-1; col++)
        {
            printf("%d", first);
            if(col<row)
            {
                first++;
            }
            else
            {
                first--;
            }
        }
        printf("\n");
    }
    return 0;
}




