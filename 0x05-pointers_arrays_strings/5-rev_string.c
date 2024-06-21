#include <stdio.h>
#include <string.h>
#include "main.h"

void rev_string(char *s) {
    int length = 0;
    int i = 0;
    char temp;

    /* Find the length of the string */
    while (s[length] != '\0') {
        length++;
    }

    /* Swap the characters in place */
    for (i = 0; i < length / 2; i++) {
        temp = s[i];
        s[i] = s[length - 1 - i];
        s[length - 1 - i] = temp;
    }
}
