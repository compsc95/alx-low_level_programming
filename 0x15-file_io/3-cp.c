#include "main.h"

void print_error(int st, int fd);

/**
 * main - function to copy contents of a file
 * @argc: count of arguments
 * @argv: string of arguments
 *
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	int fd, rd = 1024, wrt, fd2, efd;

	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd2 = open(argv[2], O_RDWR | O_CREAT | O_TRUNC, 0664);
	if (fd2  == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while (rd == 1024)
	{
		rd = read(fd, buff, sizeof(buff));
		if (rd <= 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		wrt = write(fd2, buff, rd);
		if (wrt != rd)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}

