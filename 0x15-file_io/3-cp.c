#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

#define BUFFER_SIZE 1024

/* prototypes */
void handle_closing(int f);

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
	{
		write(STDERR_FILENO, "Usage: cp file_from file_to\n", strlen("Usage: cp file_from file_to\n"));
		exit(97);
	}

	ffrom = open(argv[1], O_RDONLY);
	if (ffrom < 0)
	{
		write(STDERR_FILENO, "Error: Can't read from file ", strlen("Error: Can't read from file "));
		write(STDERR_FILENO, argv[1], strlen(argv[1]));
		write(STDERR_FILENO, "\n", 1);
		exit(98);
	}
	fto = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fto < 0)
	{
		write(STDERR_FILENO, "Error: Can't write to ", strlen("Error: Can't write to "));
		write(STDERR_FILENO, argv[2], strlen(argv[2]));
		write(STDERR_FILENO, "\n", 1);
		exit(99);
	}

	while (r >= BUFFER_SIZE)
	{
		r = read(ffrom, buf, BUFFER_SIZE);
		if (r < 0)
		{
			write(STDERR_FILENO, "Can't read from file ", strlen("Can't read from file "));
			write(STDERR_FILENO, argv[1], strlen(argv[1]));
			write(STDERR_FILENO, "\n", 1);
			exit(98);
		}
		w = write(fto, buf, r);
		if (w < 0)
		{
			write(STDERR_FILENO, "Error: Can't write to ", strlen("Error: Can't write to "));
			write(STDERR_FILENO, argv[2], strlen(argv[2]));
			write(STDERR_FILENO, "\n", 1);
			exit(99);
		}
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

		write(STDERR_FILENO, "Error: Can't close fd ", strlen("Error: Can't close fd "));
		write(STDERR_FILENO, str, strlen(str));
		write(STDERR_FILENO, "\n", 1);

		free(str);
		exit(100);
	}
}

