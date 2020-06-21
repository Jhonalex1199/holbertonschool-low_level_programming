#include <stdio.h>

/**
 * prime_factor - prime factors 1231952
 *
 * Return: Always 0
*/

int main(void)
{
	long int n = 102;
	long int a;
	long int i,j;

	for (i = 2; i < n; i++)
	{
		if ((n % i) == 0)
		{
			a = 1;
			for (j = 2;j <= (i / 2); j++)
			{
				if ((i % j) == 0)
				{
					a = 0;
					break;
				}
			}
			if (a == 0)
			{
				printf("%ld, ", i);
			}
		}
	}
	return (0);
}
