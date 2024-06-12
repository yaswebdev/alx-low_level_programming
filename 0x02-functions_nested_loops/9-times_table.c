#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
 *
 *
 */

void times_table(void)
{
int i;
int j;

for (i = 0; i <= 9; i++){
	for (j = 0; j <= 9; j++)
	{
		int product = i * j;

		if (j != 0)
		{
			printf(", ");
		}

		if (product < 10 && j != 0)
		{
			printf(" ");
		}
		printf("%d", product);
	}
	printf("\n");
}
}
