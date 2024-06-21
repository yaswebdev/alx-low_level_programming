/* #include <stdio.h>
#include <unistd.h>
#include "main.h"
*/
/*void print_rev(char *s){

	int length = 0;
	while (s[length] == '\0'){
		_putchar(s[length]);
		length--;
	}
	_putchar('\n');
	
	for (length = length - 1; length >= 0; length--){
		_putchar(s[length]);
	}
	_putchar('\n');
	}
*/

#include <stdio.h>
#include "main.h"

void print_rev(char *s) {
    int length = 0;

    /* Calculate the length of the string*/
    while (s[length] != '\0') {
        length++;
    }

    /* Print the string in reverse*/
    for (length = length - 1; length >= 0; length--) {
        _putchar(s[length]);
    }
    _putchar('\n');
}
