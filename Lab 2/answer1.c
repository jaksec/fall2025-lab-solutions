#include <stdio.h>
#include <math.h>

int main(void) {
    int min_run, mph;
    double miles_run;

    printf("What is your average running speed in mph?\n");
    scanf("%d", &mph);

    printf("How long are you running, in minutes?\n");
    scanf("%d", &min_run);

    // Convert minutes to hours and calculate miles
    miles_run = mph * (min_run / 60.0);

    // Print result rounded to 2 decimal places
    printf("You will run %.2f miles.\n", miles_run);

    return 0;
}