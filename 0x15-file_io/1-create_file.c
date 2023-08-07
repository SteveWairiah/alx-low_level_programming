#include "main.h"
#include <stdio.h>

/**
 * create_file - creates a file
 * @filename: file name
 * @text_content: contenst of the text
 * Return: -1 if NULL.
 */

int create_file(const char *filename, char *text_content)
{
	int a, b, len = 0;

	if (filename == NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	a = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	b = write(a, text_content, len);

	if (a == -1 || b == -1)
		return (-1);

	close(a);
	return (1);
}
