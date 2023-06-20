#include "main.h"

/**
 * print_alphabet - Function that prints the alphabet, in lowercase
 * Return: void
 */

void print_alphabet(void)
{
	char s;

	for (s = 'a'; s <= 'z'; s++)
	{
		putchar(s);
	}
	putchar('\n');
}
