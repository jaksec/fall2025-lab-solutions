#include <stdio.h>

int main(void) {
    int freethrows, points;

    printf("How many free throws did you make in 60 seconds?\n");
    scanf("%d", &freethrows);

    if (freethrows <= 10) {
        points = freethrows * 1;
    } else {
        points = 10 * 1 + (freethrows - 10) * 2;
    }

    printf("You scored %d points.\n", points);

    return 0;
}