#include <stdio.h>
#include "main.h"

int _isupper(int c) {
    if (c >= 'A' && c <= 'Z') {
        printf("%c : 1\n", c);
        return 1;
    } else if (c >= 'a' && c <= 'z') {
        printf("%c : 0\n", c);
        return 0;
    }
}
