#include "dog.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_dog - the function to pritn it .
 * @d: the dog .
 * Return: nothing .
 */

void print_dog(struct dog *d)
{
if (d != NULL)
{
printf("Name: %s\n", d->name ? d->name : "(nil)");
printf("Age: %.6f\n", d->age);
printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
}
