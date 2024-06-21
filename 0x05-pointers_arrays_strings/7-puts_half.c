#include <stdio.h>
#include <unistd.h>
#include "main.h"

void puts_half(char *str){


	int length = 0;
	int n;
	int i;
	while (str[length] != '\0'){
	
		length++;
	
	}

	if (length % 2 == 0) {
        	n = length / 2;
    	} else {
        	n = (length - 1) / 2;
    	}

	i = n;

	while (str[i] != '\0'){
		_putchar(str[i]);

		i++;
	
	}
	_putchar('\n');



}
