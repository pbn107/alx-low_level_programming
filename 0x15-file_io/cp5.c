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
	int src, dest, bytes, cf;

	if (argc != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", argv[0]);
		return (97);
	}

	if (argv[1] == NULL || argv[2] == NULL)
	{
		exit (98);
	}

	src = open(argv[1], O_RDONLY);
	dest = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT | O_APPEND, 0664);

	if (src == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n",argv[1]);
		exit (98);
	}
	while ((bytes = read(src, buffer, sizeof(buffer))) > 0)
	{
		int r = write(dest, buffer, sizeof(buffer));
		if (r == -1)
		{
			dprintf(2, "Error: Can't write to %s \n", argv[2]);
			exit (99);
		}
	}
	if ((cf = close(src)) == -1)
	{
		dprintf(2, "Error: Can't close fd %i\n", cf);
		exit (100);
	}
	if ((cf = close(dest)) == -1)
	{
		dprintf(2, "Error: Can't close fd %i\n",cf);
		exit(100);
	}
	return (0);
}
clude "main.h"
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
	int src, dest, bytes, cf;

	if (argc != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", argv[0]);
		return (97);
	}

	if (argv[1] == NULL || argv[2] == NULL)
	{
		exit (98);
	}

	src = open(argv[1], O_RDONLY);
	dest = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT | O_APPEND, 0664);

	if (src == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n",argv[1]);
		exit (98);
	}
	while ((bytes = read(src, buffer, sizeof(buffer))) > 0)
	{
		int r = write(dest, buffer, sizeof(buffer));
		if (r == -1)
		{
			dprintf(2, "Error: Can't write to %s \n", argv[2]);
			exit (99);
		}
	}
	if ((cf = close(src)) == -1)
	{
		dprintf(2, "Error: Can't close fd %i\n", cf);
		exit (100);
	}
	if ((cf = close(dest)) == -1)
	{
		dprintf(2, "Error: Can't close fd %i\n",cf);
		exit(100);
	}
	return (0);