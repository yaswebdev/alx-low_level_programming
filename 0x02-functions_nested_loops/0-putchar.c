#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * main - start point of execution program
 * Return: Always 0 (Successfull)
 */


int main(void)
{
char str[] = "_putchar";
int i;

for (i = 0; str[i] != '\0'; i++)
{
putchar(str[i]);
}
putchar('\n');
return (0);
}
