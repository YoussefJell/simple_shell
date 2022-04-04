#include "main.h"
/**
 * print_env - prints environment
 * Return: none
 */

void print_env(void)
{
	unsigned int i;

	i = 0;
	while (environ[i] != NULL)
	{
		printf("%s\n", environ[i++]);
	}
}
