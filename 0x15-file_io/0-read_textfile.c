#include "main.h"

/**
 * read_textfile - prints file content
 * @filename: name of the file
 * @letters: number of letters printed
 *
 * Return: number of printed letters if success, 0 otherwise
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int f, r;
	ssize_t count = 0;
	char *buf;

	if (filename == NULL)
		return (0);

	f = open(filename, O_RDONLY);
	if (f < 0)
		return (0);

	buf = malloc(sizeof(char *) * letters);
	if (buf == NULL)
		return (0);

	r = read(f, buf, letters);
	if (r < 0)
	{
		free(buf);
		return (0);
	}
	close(f);

	write(STDOUT_FILENO, buf, r);
	return (r);

	return (count);
}

