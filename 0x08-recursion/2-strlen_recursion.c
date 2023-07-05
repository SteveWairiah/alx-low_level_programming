#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion -  returns the length of a string
 * @s: input
 * Return: Length of string
 */

int _strlen_recursion(char *s)
{
	int l = 0;

	if (*s)
	{
		l++;
		l += _strlen_recursion(s + 1);
	}
	return (l);
}
