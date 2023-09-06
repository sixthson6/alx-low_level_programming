#include "main.h"

/**
 * append_text_to_file - create file or append text if file exist
 * @filename: file
 * @text_content: content of file
 *
 * Return: 1 (Success), -1 (Failure)
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND, 0644);
	if (fd == -1)
	{
		if (errno == ENOENT)
			return (-1);
		else
			return (-1);
	}

	if (text_content != NULL)
	{
		bytes_written = write(fd, text_content, sizeof(text_content));
		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
