#include "main.h"
#include <stdio.h>

/**
 * append_text_to_file - appends text
 * @filename: name of file
 * @text_content: contents of file
 * Return: -1 if NULL
 * if file does not exist -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int a, b, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	a = open(filename, O_WRONLY | O_APPEND);
	b = write(a, text_content, len);

	if (a == -1 || b == -1)
		return (-1);

	close(a);

	return (1);
}
