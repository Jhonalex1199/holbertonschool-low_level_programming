#include "shell.h"

/**
 * end_of_file - end process
 * @buffer: buffer to free
 */

void end_of_file(char *buffer)
{
	if (isatty(STDIN_FILENO))
		write(STDOUT_FILENO, "\n", 1);
	free(buffer);
}