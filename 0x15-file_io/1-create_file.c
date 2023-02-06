#include "main.h"

/**
 * create_file - create a file
 * @filename: name of the file
 * @text_content: r=text to add
 * Return: integer
 */

int create_file(const char *filename, char *text_content)
{
	int fd, i = 0;
	char c;

	if (!filename)
	{
		return (-1);
	}

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC);
	if (fd == -1)
	{
		return (-1);
	}

	if (!text_content)
	{
		close(fd);
		return (1);
	}

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
