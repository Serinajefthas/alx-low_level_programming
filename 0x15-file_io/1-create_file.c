#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>
/**
 * create_file - creates a file
 * @filename: file ptr
 * @text_content: content to write to file
 * Return: 1 (success) or -1(failure)
 */
int create_file(const char *filename, char *text_content)
{
	FILE *fp;
	mode_t permissions = S_IRUSR | S_IWUSR;

	if (!filename)
		return (-1);
	chmod(filename, permissions);
	/* try to append to existing file*/
	fp = fopen(filename, "a");
	if (!fp)
		return (-1);
	if (text_content == NULL)
		text_content = " ";
	if (fp != NULL)
	{
		fputs(text_content, fp);
		fclose(fp);
		return (1);
	}
	/* if file doesn't exist, try create one*/
	fp = fopen(filename, "w");
	if (!fp)
		return (-1);

	fputs(text_content, fp);
	fclose(fp);
	return (1);
}
