#include <stdio.h>
#include <unistd.h>
#include "main.h"

void puts2(char *str){


	int length = 0;
	int i = 0;

	while (str[length] != '\0'){
	
		length++;
	}

	while (i <= length){

	
		_putchar(str[i]);
		i = i + 2;
	}
	_putchar('\n');

}
