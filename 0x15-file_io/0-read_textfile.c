#include "holberton.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile - Function that reads a text file and prints.
 *@filename: File name.
 *@letters: Number of latters.
 *Return: Result.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	int letters2;

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);

	letters2 = read(fd, buffer, letters);

	if (write(STDOUT_FILENO, buffer, letters2) != letters2)
		return (0);

	free(buffer);
	close(fd);

return (letters2);
}
