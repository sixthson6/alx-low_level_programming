#include "main.h"

/**
 * append_text_to_file - create file and and append text to it
 * @filename: filename
 * @text_content: text to write to created file
 *
 * Return: 1(Success), -1(Failure)
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written;
	size_t text_length = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[text_length] != '\0')
			text_length++;
		bytes_written = write(fd, text_content, text_length);
		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}
	}
	else
	{
		if (close(fd) == -1)
			return (-1);
		return (1);
	}
	close(fd);
	return (1);
}
