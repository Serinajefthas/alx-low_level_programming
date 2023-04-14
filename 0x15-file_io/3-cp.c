#include "main.h"

/**
 * main - copies contents one file to another
 * @argc: argument count
 * @argv: array of arguments passed in
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int src_fd, dest_fd, w, r, c;
	char *buffer;

	if (argc != 3)
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to"), exit(97);

	src_fd = open(argv[1], O_RDONLY);
	if (src_fd == -1 || argv[1] == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	buffer = malloc(sizeof(char) * 1024);
	if (!buffer)
		return (-1);

	dest_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 0664);
	if (dest_fd == -1 || argv[2] == NULL)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[1]), exit(99);

	r = read(src_fd, buffer, 1024);
	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1])
		exit(98);
	}
	w = write(dest_fd, buffer, 1024);
	if (w == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);

	c = close(src_fd);
	if (c == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", argv[1]), exit(100);
	c = close(dest_fd);
	if (close(dest_fd == -1))
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", argv[2]), exit(100);

	free(buffer);
	return (0);
}

