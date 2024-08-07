#include <unistd.h>
#include <stdio.h>
#include "main.h"


void _puts_recursion(char *s){


	int i = 0;

	while(s[i]){

		_putchar(s[i]);
		i++;
	
	}
	_putchar('\n');

}
