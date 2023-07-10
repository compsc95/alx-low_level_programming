#include "main.h"

/**
 * read_textfile - a function that reads a text file and
 *	prints it to the POSIX standard output
 * @filename: file name
 * @letters: number of letters it could read and print
 *
 * Return: Actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	size_t wr = 0, sz;

	char *c = malloc(sizeof(char) * letters);

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd < 0)
	{
		return (0);
	}

	sz = read(fd, c, letters);

	c[sz] = '\0';

	wr = write(STDOUT_FILENO, c, sz);

	free(c);
	close(fd);


	return ((wr != sz) ? 0 : wr);
}

