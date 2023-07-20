#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_all - prints anything
 * @format: types of arguments passed to the function
 * @...: number
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *c, *s = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", s, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", s, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", s, va_arg(list, double));
					break;
				case 's':
					c = va_arg(list, char *);
					if (!s)
						c = "(nil)";
					printf("%s%s", s, c);
					break;
				default:
					i++;
					continue;
			}
			s = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(list);
}
