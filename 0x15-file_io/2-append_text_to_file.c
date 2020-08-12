#include "holberton.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * append_text_to_file - Function that appends text at the end of a file.
 * @filename: Files names.
 * @text_content: Text.
 * Return: 1 or -1
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, size, len;


	if (filename == NULL)
		return (-1);

	fd = open(filename, O_APPEND | O_RDWR, 0600);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len] != '\0'; len++)
			;
		size = write(fd, text_content, len);

		if (size == -1)
		{
			return (-1);
		}
	}
		close(fd);
		return (1);
	return (1);
}
