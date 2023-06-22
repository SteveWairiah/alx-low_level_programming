#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prints ten times the number 0 to 14
 * Description: function that prints 10 times the numbers, from 0 to 14
 * return: print numbers 0 to 14 ten times
 */

void more_numbers(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
	for (y = 0; y <= 14; y++)
	{
	if (y > 9)
	{
	_putchar((y / 10) + '0');
	}
	_putchar((y % 10) + '0');
	}
	_putchar('\n');
	}
}
