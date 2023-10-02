#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- reads a text file and prints it to the-
 * standard output
 * @letters: number of letters it should read and print
 * @filename: name of file to read and print
 *
 * Return: k-  number of letters it could read and print or 0 if fail
 */
ssize_t read_textfile(const char *filename, size_t letters)
{

	char *buff;
	ssize_t file_desc;
	ssize_t k;
	ssize_t h;

	file_desc = open(filename, O_RDONLY);

	if (file_desc == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);

	h = read(file_desc, buff, letters);
	k = write(STDOUT_FILENO, buff, h);

	free(buff);
	close(file_desc);
	return (k);
}
