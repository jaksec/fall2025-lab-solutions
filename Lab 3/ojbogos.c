#include <stdio.h>

int main() {

    double containerCost = 0;
    int numContainers = 0;
    double totalCost = 0;

    printf("What is the cost of one container of OJ in dollars?\n");
    scanf("%lf", &containerCost);
    printf("How many containers are you buying?\n");
    scanf("%d", &numContainers);

    if (numContainers % 2 == 0) {
        totalCost = containerCost * (numContainers / 2);
    } else {
        totalCost = containerCost * ((numContainers / 2) + 1);
    }

    printf("The total cost is: $%.2lf\n", totalCost);

    return 0;
}