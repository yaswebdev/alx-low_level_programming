#include <stdlib.h0>
#include <time.h>
/* more headers goes there */
/**
 * main - ENTRY
 * Return: Always 0
 */
/* betty style doc for function main goes there */
int main(void)
{
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        /* your code goes there */
        if (n > 0)
        {
        printf("is positive");
        }
        if else(n == 0)
        {
        printf("is zero");
        }
        else
        {
        printf("is negative");
        }
        return (0);
}
