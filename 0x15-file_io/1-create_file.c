#include "main.h"
#include <stdlib.h>
/**
 * create_file- function that creates a file.
 * @filename: name of file to create
 * @text_content: terminated string to write to the file
 *
 * Return: 1 if success or -1 if fail
 */
int create_file(const char *filename, char *text_content)
{
	int file_desc, j, str = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (str = 0; text_content[str];)
			str++;
	}

	file_desc = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	j = write(file_desc, text_content, str);

	if (file_desc == -1 || j == -1)
		return (-1);

	close(file_desc);

	return (1);
}
