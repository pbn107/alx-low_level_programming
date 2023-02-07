#include "main.h"
#include <stdio.h>

/**
 * main - copy files from one file to the other
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	char buffer[1024];
	int src, dest, bytes;

	if (argc != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", argv[0]);
		return (97);
	}

	if (argv[1] == NULL || argv[2] == NULL)
	{
		return (98);
	}
	src = open(argv[1], O_RDONLY);
	dest = open(argv[2], O_RDWR | O_CREAT | O_RDWR | S_IRUSR | S_IWUSR |S_IRGRP |S_IWGRP |S_IROTH);
	if (src == -1 || dest == -1)
	{
		return (98);
	}
	while ((bytes = read(src, buffer, sizeof(buffer))) > 0)
	{
		int r = write(dest, buffer, sizeof(buffer));
	
		if (r < 0)
		{
			return (99);
		}
	}
	close(src);
	close(dest);
	return (0);
}
