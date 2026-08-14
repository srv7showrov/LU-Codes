

// #include<stdio.h>
// int main (){
//     int t, count = 0;
//     scanf("%d", &t);

//     for(int i=1; i<=t; i++)
//     {
//         int n;
//         scanf("%d", &n);
//         count = count + n/100;
//         count = count + (n%100)/50;
//         count = count + (n%50)/10;
//         count = count + (n%10)/5;
//         count = count + (n%5)/2;
//         count = count + (n%2)/1;
//         count = count + n%1;

//         printf("%d\n", count);
//         count = 0;
//     }
//     return 0;
// }





#include<stdio.h>
int main (){

    int currency[6] = {100, 50, 10, 5, 2, 1};
    int t;
    scanf("%d", &t);

    for(int i=1; i<=t; i++)
    {
        int n, notes = 0;
        scanf("%d", &n);
        for(int j=1; j<=6; j++)
        {
            notes = notes + n/currency[j];
            n = n % currency[j];
        }
        printf("%d\n", notes);
    }
    return 0;
}

