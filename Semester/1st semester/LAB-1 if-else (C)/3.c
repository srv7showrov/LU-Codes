
#include<stdio.h>
int main (){
    float bill;
    char rating;
    int people;
    
    scanf("%f  %c %d", &bill, &rating, &people);

if(bill <= 0 || people <= 0)
{
    printf("Invalid input\n");
    return 0;
}

float tipPercent;

if(people > 8){
    tipPercent = 0.18;
}
else {
    if(rating == 'E')
    tipPercent = 0.20;
    
    else if(rating == 'G')
    tipPercent = 0.15;
    
    else if(rating == 'A')
    tipPercent = 0.10;
    
    else if(rating == 'P')
    tipPercent = 0.05;
    
    else {
    printf("Invalid rating\n");
    return 0;
    }
}

float tip = bill*tipPercent;
float final_bill = bill + tip;
float per_person = final_bill / people;
    
    printf("Tip: %.2f\n", tip);
    printf("Total: %.2f\n", final_bill);
    printf("Per person: %.2f\n", per_person);

return 0;
}
