#include "main.h"

/**
 * append_text_to_file - appends text to file
 * @filename: the name of the file
 * @text_content: content appended
 *
 * Return: 1 success, -1 otherwise
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int f, a;

	if (filename == NULL || text_content == NULL)
		return (-1);

	f = open(filename, O_APPEND);
	if (f < 0)
		return (-1);

	a = dprintf(f, "%s\n", text_content);
	if (a < 0)
	{
		close(f);
		return (-1);
	}

	close(f);

	return (1);
}

