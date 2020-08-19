#include "shell.h"
/**
 * free_all - free all and double pointers
 * @ptr: pointer to free
 */
void free_all(char **ptr)
{
	unsigned int i = 0;

	if (ptr == NULL)
		return;

	while (ptr[i])
	{
		free(ptr[i]);
		i++;
	}

	if (ptr[i] == NULL)
		free(ptr[i]);
	free(ptr);
}


/**
 * null_array - if array o tokens are null
 * @buffer: buffer to free
 */
void null_array(char **buffer)
{
	free(buffer);
	exit(EXIT_SUCCESS);
}

/**
 *get_out - free all and double pointers
 * @array: pointer to free
 */

void get_out(char **array)
{
	free(array);
	free_all(array);
	exit(EXIT_SUCCESS);
}