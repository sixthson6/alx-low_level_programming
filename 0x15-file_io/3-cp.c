#include "main.h"

/**
 * main - Entry point
 * @ac: arg count
 * @av: arg vector
 *
 * Return: 0 (Success)
 */

int main(int ac, char *av[])
{
int fd_file_from, fd_file_to;
char buffer[MAX_LEN];
ssize_t bytes_read, bytes_written;

if (ac != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}

fd_file_from = open(av[1], O_RDONLY);
if (fd_file_from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
exit(98);
}

fd_file_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (fd_file_to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
exit(99);
}

while ((bytes_read = read(fd_file_from, buffer, MAX_LEN)) > 0)
{
bytes_written = write(fd_file_to, buffer, bytes_read);
if (bytes_written == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
exit(99);
}
}

if (bytes_read == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
exit(98);
}

if (close(fd_file_from) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close file %s\n", av[1]);
exit(100);
}

if (close(fd_file_to) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close file %s\n", av[2]);
exit(100);
}

return (0);
}
