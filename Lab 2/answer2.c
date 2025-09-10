#include <stdio.h>

int main(void) {
    int freethrows, points;

    printf("How many free throws did you make in 60 seconds?\n");
    scanf("%d", &freethrows);

    points = (freethrows <= 10) * freethrows + (freethrows > 10) * (10 + (freethrows - 10) * 2);

    printf("You scored %d points.\n", points);

    return 0;
}