#include <stdio.h>
/**
 * main - Entry point
 * Description: function that prints the alphabet, in lowercase
 * Return: Always 0
 */

int main(void)
{
	int s;

	for (s = 97; s <= 122; s++)
	{
		putchar(s);
	}
	putchar('\n');
	return (0);
}
