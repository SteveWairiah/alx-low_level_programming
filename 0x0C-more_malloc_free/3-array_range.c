#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * *array_range -  creates an array of integers
 * @min: Minimum
 * @max: Maximum
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *n;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	n = malloc(sizeof(int) * size);

	if (n == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		n[i] = min++;

	return (n);
}
