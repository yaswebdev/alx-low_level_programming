#include <stdio.h>
#include <unistd.h>

/**
 * main - start point of execution program
 * Return: Always 0 (Successfull)
 */


int main(void)
{
int i;
char str[] = "_putchar";

for (i = 0; str[i] != '\0'; i++)
{
putchar(str[i]);
}
putchar('\n');
return (0);
}
