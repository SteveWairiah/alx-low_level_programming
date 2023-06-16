#include  <stdio.h>
/**
 * main - Entry point
 * Description: prints the alphabet in lowercase except e and q
 * Return: Always 0
 */

int main(void)
{
	int n = 97;
	
	while (n <= 122);
	{
		if (n != 101 &&  n != 113)
		{
			putchar(n);
		}
	}
	putchar('\n');
	return (0);
}
