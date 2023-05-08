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
	buffer = malloc(sizeof(char) * 1024);
	if (!buffer)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[1]);
		exit(99);
	}
	src_fd = open(argv[1], O_RDONLY);
	r = read(src_fd, buffer, 1024);
	dest_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (src_fd == -1 || r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		free(buffer);
		exit(98);
	}
	w = write(dest_fd, buffer, 1024);
	if (dest_fd == -1 || w == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[1]), exit(99);

	r = read(src_fd, buffer, 1024);
	dest_fd = open(argv[2], O_WRONLY | O_APPEND);

	c = close(src_fd);
	if (c == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src_fd), exit(100);
	c = close(dest_fd);
	if (c == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest_fd), exit(100);

	free(buffer);
	return (0);
}
