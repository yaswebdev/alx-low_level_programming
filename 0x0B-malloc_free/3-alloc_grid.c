#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop .
 * @width: width .
 * @height: height .
 * Return: pointer. array
 */
int **alloc_grid(int width, int height)
{
int **me;
int X, Y;

if (width <= 0 || height <= 0)
return (NULL);
me = malloc(sizeof(int *) * height);
if (me == NULL)
	return (NULL);
for (X = 0; X < height; X++)
{
	me[X] = malloc(sizeof(int) * width);
	if (me[X] == NULL)
	{
		for (; X >= 0; X--)
			free(me[X]);
		free(me);
		return (NULL);
	}
}
for (X = 0; X < height; X++)
{
	for (Y = 0; Y < width; Y++)
		me[X][Y] = 0;
}
return (me);
}
