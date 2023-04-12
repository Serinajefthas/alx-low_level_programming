#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
/**
 * read_textfile - reads txt file and returns num letters could printed
 * @filename: pointer to file
 * @letters: num of letters that should read and printed
 * Return: actual num letters could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t num_bytes, cnt;
	char *buffer = malloc(sizeof(char) * letters);

	if (!buffer || !filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}
	num_bytes = read(fd, buffer, letters);
	if (!num_bytes)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	cnt = write(STDOUT_FILENO, buffer, num_bytes);
	if (!cnt)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	if (num_bytes != cnt)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	close(fd);
	free(buffer);
	return (num_bytes);
}
