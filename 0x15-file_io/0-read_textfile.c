#include  "main.h"

/**
 * read_textfile - reads a text file to the stdout
 * @filename: file to be read
 * @letters: num of bytes read
 *
 * Return: num of bytes read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t bytesRead;
	int fd;
	ssize_t bytesWritten;
	ssize_t totalbytes;

	buffer = malloc(letters * sizeof(letters));
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	bytesRead = read(fd, buffer, letters);
	if (bytesRead == -1)
	{
		free(buffer);
		return (0);
	}

	while (bytesRead > 0)
	{
		bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);
		if (bytesWritten == -1)
		{
			free(buffer);
			return (0);
		}

		totalbytes += bytesWritten;
		bytesRead -= bytesWritten;
	}

	free(buffer);
	close(fd);

	return (totalbytes);
}
