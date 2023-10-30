#include "main.h"
#include <stdlib.h>
/**
 * append_text_to_file- appends text at the end of a file
 * @filename: name of the file
 * @text_content: string to add at the end of the file
 *
 * Return: 1 if succes otherwise -1 if fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int H, i, strg = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (strg = 0; text_content[strg];)
			strg++;
	}

	H = open(filename, O_WRONLY | O_APPEND);
	i = write(H, text_content, strg);

	if (H == -1 || i == -1)
		return (-1);

	close(H);

	return (1);
}
