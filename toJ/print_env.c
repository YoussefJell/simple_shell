#include "main.h"
/**
 * print_env - prints environment
 * Return: none
 */

int print_env(char *arg)
{
	unsigned int i;

	i = 0;
	while (environ[i] != NULL)
	{
		printf("%s\n", environ[i++]);
	}
	return (1);
}
