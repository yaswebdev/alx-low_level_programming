#include <stdio.h>
#include <unistd.h>
#include "main.h"

void _puts(char *str){

	int length = 0;
	while (str[length] != '\0'){
		_putchar(str[length]);
		length++;
	}
	_putchar('\n');

}
