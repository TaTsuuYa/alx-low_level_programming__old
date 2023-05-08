#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file
 * @text_content: content of the file
 *
 * Return: 1 success, -1 otherwise
 */

int create_file(const char *filename, char *text_content)
{
	int f, p;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (-1);

	f = creat(filename, 0600);
	if (f < 0)
		return (-1);

	p = dprintf(f, "%s", text_content);
	if (p < 0)
		return (-1);

	close(f);

	return (1);
}

