#include <unistd.h>
#include <stdio.h>
#include "main.h"


void _puts_recursion(char *s){

	if(*s){
		_putchar(*s);

        	_puts_recursion(s + 1);
	}
}
