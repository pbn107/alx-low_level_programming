#include "main.h"

/**
 * append_text_to_file - appends text to a file
 * @filename: name of the file to append on
 * @text_content: text to append with
 * Return: -1 (failure) or 1 if successful
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i = 0;
	char c;

	if (!filename)
	{
		return (-1);
	}
	if (!text_content)
	{
		return (1);
	}

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);

	while (text_content[i] != '\0')
	{
		c = text_content[i];
		write(fd, &c, sizeof(char));
		i++;
	}
	c = (char)10;
	write(fd, &c, sizeof(char));
	close(fd);
	return (1);
}
