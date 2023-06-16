#include  <stdio.h>
/**
 * main - Prints alphabet without q and e
 * Description: prints the alphabet in lowercase except e and q
 * Return: Always 0
 */

int main(void)
{
	int n;

	for (n = 97; n < 123;  n++)
	{
		if (n != 101 &&  n != 113)
		{
			putchar(n);
		}
	}
	putchar('\n');
	return (0);
}
