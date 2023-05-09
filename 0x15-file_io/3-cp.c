#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

#define BUFFER_SIZE 1024

/* prototypes */
void handle_closing(int f);
void handle_stderr(char *msg, char *f, int ex);

/**
 * main - copies file content to another file
 * @argc: arguments count
 * @argv: arguments array
 *
 * Return: 0 success, int otherwise
 */

int main(int argc, char **argv)
{
	int ffrom, fto;
	ssize_t r = BUFFER_SIZE, w;
	char buf[BUFFER_SIZE];

	if (argc != 3)
		handle_stderr("Usage: cp file_from file_to", NULL, 97);

	ffrom = open(argv[1], O_RDONLY);
	if (ffrom < 0)
		handle_stderr("Error: Can't read from file ", argv[1], 98);

	fto = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fto < 0)
		handle_stderr("Error: Can't write to ", argv[2], 99);

	while (r >= BUFFER_SIZE)
	{
		r = read(ffrom, buf, BUFFER_SIZE);
		if (r < 0)
			handle_stderr("Can't read from file ", argv[1], 98);

		w = write(fto, buf, r);
		if (w < 0)
			handle_stderr("Error: Can't write to ", argv[2], 99);
	}

	handle_closing(ffrom);
	handle_closing(fto);

	return (0);
}

/**
 * handle_closing - handles file closing
 * @f: file discriptor
 */

void handle_closing(int f)
{
	int c;
	char *str;

	c = close(f);
	if (c < 0)
	{
		str = malloc(sizeof(int) + 1);
		sprintf(str, "%d", f);

		handle_stderr("Error: Can't close fd ", str, 100);
	}
}

/**
 * handle_stderr - prints errors
 * @msg: error message
 * @f: file info
 * @ex: exit code
 */

void handle_stderr(char *msg, char *f, int ex)
{
	write(STDERR_FILENO, msg, strlen(msg));
	if (f != NULL)
		write(STDERR_FILENO, f, strlen(f));
	write(STDERR_FILENO, "\n", 1);

	exit(ex);
}

