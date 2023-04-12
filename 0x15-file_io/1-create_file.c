#include "main.h"
#include <fcntl.h>
/**
 * create_file - creates a file
 * @filename: file ptr
 * @text_content: content to write to file
 * Return: 1 (success) or -1(failure)
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w;

	if (!filename)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, strlen(text_content));

	if (fd == -1 || w == -1)
		return (-1);
	close(fd);
	return (1);
}
