#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main()
{
	int fd, sz;

	char *c = calloc(100, sizeof(char));

	fd = open("file.txt", O_RDONLY);

	if (fd < 0)
	{
		perror("r1");
		exit (1);
	}

	sz = read(fd, c, 10);

	printf("called read(%d, c, 10). Returned that %d bytes were read.\n", fd, sz);

	c[sz] = '\0';

	printf("Those bytes are as follows, %s\n", c);

	return (0);
}
