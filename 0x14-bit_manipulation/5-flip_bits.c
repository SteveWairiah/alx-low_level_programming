#include "main.h"

/**
 * flip_bits - counts bit changes
 * @n: 1st number
 * @m: second number
 * Return: number
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		current = exclusive >> a;
		if (current & 1)
			count++;
	}

	return (count);
}
