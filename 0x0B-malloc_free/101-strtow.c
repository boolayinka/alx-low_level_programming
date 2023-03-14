#include <stdlib.h>
#include "main.h"

/**
 * count_word - helper function to count the number of words
 * @s: string to evaluate
 * Return: number of words
 */
int count_word(char *s)
{
	int a, b, c;

	a = 0;
	c = 0;
	for (b = 0; s[b] != '\0'; b++)
	{
		if (s[b] == ' ')
			a = 0;
		else
			if (a == 0)
			{
				a = 1;
				c++;
			}
	}
	return (c);
}
/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success) or
 * NULL (Error)
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int m, n = 0, o = 0, p, q = 0, start, end;

	while (*(str + o))
		o++;
	p = count_word(str);
	if (p == 0)
		return (NULL);
	matrix = (char **) malloc(sizeof(char *) * (p + 1));
	if (matrix == NULL)
		return (NULL);
	for (m = 0; m <= o; m++)
	{
		if (str[m] == ' ' || str[m] == '\0')
		{
			if (q)
			{
				end = m;
				tmp = (char *) malloc(sizeof(char) * (q + 1));
				if (tmp == NULL)
					return (NULL);

				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[n] = tmp - q;
				n++;
				q = 0;
			}
		}
		else if (q++ == 0)
			start = m;
	}
	matrix[n] = NULL;
	return (matrix);
}
