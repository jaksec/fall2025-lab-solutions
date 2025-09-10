#include <stdio.h>

#define CALS_PER_GR_PROTEIN 4
#define CALS_PER_GR_CARB 4
#define CALS_PER_GR_FAT 9

int main() {
    int protein = 0;
    int carbs = 0;
    int fat = 0;

    printf("How many grams of protein did you eat?\n");
    scanf("%d", &protein);
    printf("How many grams of carbohydrates did you eat?\n");
    scanf("%d", &carbs);
    printf("How many grams of fat did you eat?\n");
    scanf("%d", &fat);

    int total_cals = (protein * CALS_PER_GR_PROTEIN) + (carbs * CALS_PER_GR_CARB) + (fat * CALS_PER_GR_FAT);
    printf("You ate %d calories of food.\n", total_cals);
    return 0;
}