#include "main.h"
#include <stdlib.h>
#include <stdio.h>

char *create_buff(char *file);
void close_file(int fd);

/**
 * create_buff- Allocates 1024 bytes for a buffer
 * @file: name of file buffer is storing char
 *
 * Return: pointer to the newly allocated buffer
 */
char *create_buff(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buff);
}

/**
 * close_file - Closes file descriptors.
 * @fd:file descriptor to be closed.
 */
void close_file(int fd)
{
	int m;

	m = close(fd);

	if (m == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies contents of a file to another file.
 * @argc: nnumber of arguments supplied to the program.
 * @argv: array of pointers to the arguments.
 *
 * Return: 0 if success.
 */
int main(int argc, char *argv[])
{
	int from, to, t, k;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buff = create_buff(argv[2]);
	from = open(argv[1], O_RDONLY);
	t = read(from, buff, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || t == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}

		k = write(to, buff, t);
		if (to == -1 || k == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}

		t = read(from, buff, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (t > 0);

	free(buff);
	close_file(from);
	close_file(to);

	return (0);
}
