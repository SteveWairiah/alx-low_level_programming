#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: integers
 * @...: variables to calculate the sum of
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list x;
	unsigned int i, sum = 0;

	va_start(x, n);

	for (i = 0; i < n; i++)
		sum += va_arg(x, int);

	va_end(x);

	return (sum);
}
