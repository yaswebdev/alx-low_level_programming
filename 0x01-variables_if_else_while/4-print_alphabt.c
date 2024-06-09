#include <stdio.h>

/**
 * main - start point of execution program
 * Return: always 0 (successfull)
 */

int main(void)
{
char i;
for (i = 'a'; i <= 'z'; i++)
{
if (i != 'q' && i != 'e')
{
putchar(i);
}
}
putchar('\n');
return (0);
}
