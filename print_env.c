#include "main.h"
#define UNUSEDVAR __attribute__((unused))
/**
 * print_env - prints environment
 * @UNUSEDVAR: unused args
 * Return: none
 */

int print_env(char **args UNUSEDVAR, char **splitPath UNUSEDVAR,
			  char *string UNUSEDVAR)
{
	unsigned int i = 0, j = 0;

	while (environ[i])
	{
		j = 0;
		while (environ[i][j])
		{
			_putchar(environ[i][j]);
			j++;
		}

		if (j != 0)
			_putchar('\n');
		i++;
	}
	return (1);
}
