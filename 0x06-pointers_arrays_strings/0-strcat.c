#include "main.h"
#include <stdio.h>

/**
 * *_strcat - concatenates two strings
 * @dest: The string to be appended on
 * @src: The string to be appended on dest
 * Return: Pointer to the resulting dest.
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
