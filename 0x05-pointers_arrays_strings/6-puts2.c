#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints all characters
 * @str: the string in question
 * Return: void
 */

void puts2(char *str)
{
	int i;
	int j = 0;

	while (str[j] != '\0')
	{
	j++;
	}

	for (i = 0; i < j; i += 2)
	{
	_putchar(str[1]);
	}
	_putchar('\n');
}