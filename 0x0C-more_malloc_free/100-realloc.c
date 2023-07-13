#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *_realloc - reallocates a memory block
 * @ptr: pointer to the memory
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: new size, in bytes of the new memory block
 * Return: Null
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *c;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		c = malloc(new_size);

		if (c == NULL)
			return (NULL);

		return (c);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}
	c = malloc(new_size);

	if (c == NULL)
		return (NULL);

	for (i = 0; i < old_size && i < new_size; i++)
	{
		c[i] = ((char *) ptr)[i];
	}
	free(ptr);
	return (c);
}
