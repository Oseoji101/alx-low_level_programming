#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>

#define BUFFER_SIZE 1024

void error_exit(int code, const char *message)
{
	dprintf(2, "%s\n", message);
	exit(code);
}

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		error_exit(97, "Usage: cp file_from file_to");
	}

	const char *file_from = argv[1];
	const char *file_to = argv[2];

	int fd_from = open(file_from, O_RDONLY);

	if (fd_from == -1)
	{
		error_exit(98, "Error: Can't read from file %s");
	}

	int fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0644);

	if (fd_to == -1)
	{
		error_exit(99, "Error: Can't write to file %s");
	}

	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;

	while ((bytes_read = read(fd_from, buffer, sizeof(buffer)) > 0))
	{
		bytes_written = write(fd_to, buffer, bytes_read);

		if (bytes_written == -1)
		{
			error_exit(99, "Error: Can't write to file %s");

	}

	if (bytes_read == -1)
	{
		error_exit(98, "Error: Can't read from file %s");
	}

	if (close(fd_from) == -1)
	{
		error_exit(100, "Error: Can't close fd %d");
	}

	if (close(fd_to) == -1)
	{
		error_exit(100, "Error: Can't close fd %d");
	}

	return (0);
}

