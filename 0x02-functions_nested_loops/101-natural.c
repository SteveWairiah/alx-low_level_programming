#include <stdio.h>

/**
 * main - prinys the sum of all multiples of 3 or 5 upo 1024
 * Returns: Always (Success)
 */

int main(void)
{
	int i, z;

	z = 0;
	while (i < 1024)
	{
	if ((i % 3 == 0) || (i % 5 == 0))
	{
	z += i;
	}
	i++;
	}
	printf("%d", z);
	printf("\n");
	return (0);
}
