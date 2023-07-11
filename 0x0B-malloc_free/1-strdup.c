#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *_strdup - returns a pointer to a newly allocated space
 * @str: char
 * Return: pointer, NULL if fails
 */

char *_strdup(char *str)
{
	char *a;
	int i, n = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	a = malloc(sizeof(char) * (i + 1));

	if (a == NULL)
		return (NULL);
	for (n = 0; str[n]; n++)
		a[n] = str[n];
	return (a);
}
