#include "shell.h"

/**
 * main - start function to shell project
 * @ac: argument counter
 * @av: argument array
 * Return: ac
 */

int main(int ac, char **av)
{
	char *readGet, **tokenizer, **executeShell;

	if (av == NULL)
	{
		return ('\0');
	}
	while (1)
	{
		printerPrompt();
		/* write(STDOUT_FILENO,, 9); */
		readGet = read_line();
		tokenizer = strtoken(readGet);
		executeShell = executer(tokenizer);
	}
free(readGet);
free(tokenizer);
free(executeShell);
return (ac);
}