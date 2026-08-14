
#include <stdio.h>

int main() {
    float weight;
    int exercise;
    char climate;

    scanf("%f %d %c", &weight, &exercise, &climate);

    if (weight <= 0 || exercise < 0) {
        printf("Invalid input\n");
        return 0;
    }

    float base = weight * 0.033;
    float exercise_add = (exercise / 30) * 0.5;
    float subtotal = base + exercise_add;
    float final_intake;
    
    if (climate == 'H') {
        final_intake = subtotal + (subtotal * 0.20);
    } else if (climate == 'C') {
        final_intake = subtotal + (subtotal * 0.10);
    } else {
        final_intake = subtotal;
    }

    printf("Recommended intake: %.2f liters\n", final_intake);

    if (final_intake > 5.00) {
        printf("Warning: Consult a doctor before consuming %.2f liters daily\n", final_intake);
    }

    return 0;
}