#include <stdio.h>

int main(void) {
    int day;
    long algae = 1000000;  // initial algae count

    printf("Day\tAlgae\n");

    for(day = 1; day <= 150; day++) {
        printf("%d\t%ld\n", day, algae);
        algae = (long)(algae * 1.05);  // multiply by 1.05 and round down
    }

    return 0;
}