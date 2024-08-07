#include <stdio.h>
#include "main.h"

void print_comb2(void) {
    int i;
    int j;

    for (i = 0; i <= 99; i++) {
        for (j = i + 1; j <= 99; j++) {
            printf("%02d %02d", i, j);
            if (!(i == 98 && j == 99)) {
                printf(", ");
            }
        }
    }
    printf("\n");
}
