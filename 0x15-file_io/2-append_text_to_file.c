#include "main.h"

/**
 * append_text_to_file - adds text to end of file
 * @filename: ptr to FILE structure w filename as file's name
 * @text_content: text to add to file
 * Return: 1(success) or -1(failure)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	w = write(fd, text_content, strlen(text_content));
	if (w == -1)
		return (-1);
	close(fd);
	return (1);
}
