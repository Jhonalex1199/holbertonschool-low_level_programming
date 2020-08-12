#include "holberton.h"
/**
 * create_file - Create a file.
 * @filename: File name.
 * @text_content: Text content.
 * Return: File created.
*/
int create_file(const char *filename, char *text_content)
{
	int ab, cd, count = 0;

	if (filename == NULL)
	{
		return (-1);

	}
	ab = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (ab == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		while (text_content[count])
		{
			count++;
		}
	}
	cd = write(ab, text_content, count);

	if (cd == -1)
	{
		return (-1);
		close(ab);
	}
	return (1);
}
