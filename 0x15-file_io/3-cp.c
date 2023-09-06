#include "main.h"

/**
 * main - Entry point
 * @argc: arg count
 * @argv: arg vector
 *
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int fd_file_from, fd_file_to;
	char buffer[BUFF_SIZE];
	ssize_t bytes_file_from, bytes_file_to;

	if (argc != 3)
	{
		printf("Usage: cp file_from file_to\n");
		exit (97);
	}

	fd_file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_file_to == -1)
		return (-1);

	fd_file_from = open(argv[1], O_RDONLY, 0664);
	if (fd_file_from == -1)
		return (-1);

	bytes_file_from = read(fd_file_from, buffer, BUFF_SIZE);
	if (bytes_file_from == -1)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
		exit (98);
	}

	bytes_file_to = write(fd_file_to, buffer, bytes_file_from);
	if (bytes_file_to == -1)
	{
		fprintf(stderr, "Error: Can't write to %s\n", argv[2]);
		exit (99);
	}

	if (close(fd_file_from) == -1)
	{
		fprintf(stderr, "Error: Can't close fd %d\n", fd_file_from);
		exit (100);
	}

	if (close(fd_file_to) == - 1)
	{
		fprintf(stderr, "Error: Can't close fd %d\n", fd_file_to);
		exit (100);
	}

	return (0);
}
