#include <stdlib.h>
#include "main.h"

/**
 * count_word - function .
 * @s: string .
 * Return: nbrs of words .
 */
int count_word(char *s)
{
	int var, c, w;

	var = 0;
	w = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			var = 0;
		else if (var == 0)
		{
			var = 1;
			w++;
		}
	}

	return (w);
}
/**
 * **strtow - splits .
 * @str: string .
 * Return: pointer to array of string Always (success) .
 * or NULL equals error .
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, k = 0, len = 0, word, c = 0, start, end;

	while (*(str + len))
		len++;
	word = count_word(str);
	if (word == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (word + 1));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	matrix[k] = NULL;

	return (matrix);
}
