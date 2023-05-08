#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

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
		printf("Usage: cp file_from file_to\n");
		exit(97);
	}

	ffrom = open(argv[1], O_RDONLY);
	if (ffrom < 0)
	{
		printf("Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fto = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fto < 0)
	{
		printf("Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	while (r >= BUFFER_SIZE)
	{
		r = read(ffrom, buf, BUFFER_SIZE);
		w = write(fto, buf, r);
		if (w < 0)
		{
			printf("Error: Can't write to %s\n", argv[2]);
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

	c = close(f);
	if (c < 0)
	{
		printf("Error: Can't close fd %d\n", f);
		exit(100);
	}
}

