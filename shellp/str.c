#include "shell.h"
/**
 * strtoken - tokenize stdin
 * @string: stdin
 * Return: array of tokens
 */
char **strtoken(char *string)
{
char *token;
int buffer = 64, i = 0;
char **array = malloc((buffer) * sizeof(char *));

if (array == NULL)
	return (NULL);

token = strtok(string, " \n");
while (token)
{
	array[i] = malloc(_strlen(token) + 1);
	if (array[i] == NULL)
	{
		free_all(array);
		return (NULL);
	}
	_strncpy(array[i], token, _strlen(token) + 1);
	token = strtok(NULL, " \n");
	i++;
}
array[i] = NULL;
return (array);
}