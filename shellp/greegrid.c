#include "shell.h"

/**
 * free_grid - free memory double pointers
 * @string: double pointer to free
 */

void free_grid(char **string)
{
int i, j;

for (i = 0; string[i]; i++)
{
}
for (j = 0; j < i; j++)
{
	free(string[j]);
}
free(string);
}