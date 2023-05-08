#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 1024
/**
 * main - copies file content to another file
 * @argc: arguments count
 * @argv: arguments array
 *
 * Return: 0 success, int otherwise
 */

int main(int argc, char **argv)
{
	int ffrom, fto, cfrom, cto;
	ssize_t r = BUFFER_SIZE;
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
	fto = open(argv[2], O_WRONLY | O_CREAT, 0664);
	if (fto < 0)
	{
		printf("Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while (r >= BUFFER_SIZE)
	{
		r = read(ffrom, buf, BUFFER_SIZE);
		write(fto, buf, r);
	}
	cfrom = close(ffrom);
	if (cfrom < 0)
	{
		printf("Error: Can't close fd %d\n", ffrom);
		exit(100);
	}
	cto = close(fto);
	if (cto < 0)
	{
		printf("Error: Can't close fd %d\n", fto);
		exit(100);
	}
	return (0);
}

