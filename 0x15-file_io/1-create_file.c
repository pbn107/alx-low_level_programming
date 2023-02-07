#include "main.h"

/**
 * create_file - create a file
 * @filename: name of the file
 * @text_content: r=text to add
 * Return: integer
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int wr = -1;

	if (!filename)
	{
		return (-1);
	}

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	wr= 0;
	while (text_content != NULL && text_content[wr] != '\0')
	{
		wr++;
	}	
	if (fd == -1)
	{
		return (-1);
	}

	if (!text_content)
	{
		text_content = "";
	}

	write(fd, text_content,wr);
	close(fd);
	return (1);
}
