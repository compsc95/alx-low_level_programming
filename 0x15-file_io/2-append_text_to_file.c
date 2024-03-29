#include "main.h"

/**
 * append_text_to_file - appends text to an existing file
 * @filename: the filename to append text
 * @text_content: content to be appended
 *
 * Return: 1 0n sucess, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{

	int fd, wrt;
	int len = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		text_content = "";
	}
	else
	{
		while (text_content[len] != '\0')
		{
			len++;

