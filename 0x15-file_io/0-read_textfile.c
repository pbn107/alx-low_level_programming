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

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}
	while ((bytes = read(fd, &c, sizeof(c))) > 0)
	{
		int wr;

		if (l <= letters)
		{
			wr = write(2, &c, sizeof(c));

			if (wr < 0)
			{
				return (0);
			}
			l++;
		}
		else
		{
			break;
		}
	}
	return (l);
}
