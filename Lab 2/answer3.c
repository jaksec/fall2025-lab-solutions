#include <stdio.h>

int main(void) {
    int slices, party1, party2;

    printf("How many slices of pizza did you start with?\n");
    scanf("%d", &slices);

    printf("How many people were at the first party?\n");
    scanf("%d", &party1);

    printf("How many people were at the second party?\n");
    scanf("%d", &party2);

    // Calculate leftover after first party
    slices = slices % (party1 - 1);

    // Calculate leftover after second party
    slices = slices % (party2 - 1);

    printf("You end up with %d slices for yourself.\n", slices);

    return 0;
}