#include "shell.h"

/**
 * printerPrompt - This program prints the prompt only if the
 * shell is in interactive mode
 * Return: void
 */
void printerPrompt(void)
{
	if ((isatty(STDIN_FILENO) == 1) && (isatty(STDOUT_FILENO) == 1))
		flag.interactive = 1;
	if (flag.interactive)
		write(STDERR_FILENO, "Shell_$ ", 9);
}