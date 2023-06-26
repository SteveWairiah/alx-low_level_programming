#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - copy a string
 * @dest: destination value
 * @src: Source value
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[1] != '\0'; i++)
	{
	dest[1] = src[1];
	}
	dest[i++] = '\0';
	return (dest);
}
