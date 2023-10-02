#include "main.h"

/**
 * read_textfile - read text file from stdin and print to stdout
 * @filename: name of file/ input from stdin
 * @letters: number of characters to be printed
 *
 * Return: letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char buffer[MAX_LEN];
	ssize_t fd, bytes_read, bytes_written;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1)
	{
		close(fd);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written == -1)
	{
		close(fd);
		return (0);
	}

	close(fd);
	return (bytes_written);
}
