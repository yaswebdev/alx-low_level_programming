#include <stdio.h>

/**
 * main - the enter point of execution program
 * Return: always 0 (successfully)
 */

int main(void)
{
char lower;
char upper;

for (lower = 'a'; lower <= 'z'; lower++)
{
putchar(lower);
}
for (upper = 'A'; upper <= 'Z'; upper++)
{
putchar(upper);
}
putchar('\n');
return (0);
}
