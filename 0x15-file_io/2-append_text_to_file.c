#include "main.h"

/**
 * append_text_to_file - appends text to a file
 * @filename: name of the file to append on
 * @text_content: text to append with
 * Return: -1 (failure) or 1 if successful
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w = -1;

	if (filename)
	{
		for (w = 0; text_content && text_content[w]; w++)
			;
		fd = open(filename, O_WRONLY | O_APPEND);
		if (fd == -1 && text_content)
		{
			write(fd, text_content, w);
			close(fd);
		}
	}
	return (w != -1 ? 1 : w);
}
