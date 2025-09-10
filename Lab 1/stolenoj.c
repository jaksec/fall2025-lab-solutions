#include <stdio.h>

int main() {
    int originalWeight = 0;
    float originalCost = 0;
    int beforeWeight = 0;
    int afterWeight = 0;

    printf("What is the weight (in oz.) of the original container of OJ?\n");
    scanf("%d", &originalWeight);
    printf("What was the cost of the original container of OJ in dollars?\n");
    scanf("%f", &originalCost);
    printf("What was the weight (in oz.) of the container before class?\n");
    scanf("%d", &beforeWeight);
    printf("What was the weight (in oz.) of the container after class?\n");
    scanf("%d", &afterWeight);

    // Calculate the cost per ounce
    float costPerOunce = originalCost / originalWeight;

    // Calculate the value of the stolen juice
    float stolenJuiceValue = (beforeWeight - afterWeight) * costPerOunce;

    printf("Your roommate owes: $%.2f\n", stolenJuiceValue);
    return 0;
}