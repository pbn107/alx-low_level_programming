#include "main.h"
#include <fcntl.h>
#include <stdio.h>

/**
 * read_textfile - reads from a file
 * @filename: name if the file
 * @letters: number of letters to be printed
 * Return: number of letters printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, bytes;
	char c;
	size_t l = 0;

	if (!filename)
	{
		printf("file\n");
		return (0);
	}

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		printf("2 file\n");
		return (0);
	}

	printf("I am here\n");

	while ((bytes = read(fd, &c, sizeof(c))) > 0)
	{
		if (l <= letters)
		{
			write(2, &c, sizeof(c));
			l++;
		}
		else
		{
			break;
		}
	}
	return (l);
}
