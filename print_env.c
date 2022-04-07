#include "main.h"
#define UNUSEDVAR __attribute__((unused))
/**
 * print_env - prints environment
 * @UNUSEDVAR: unused args
 * Return: none
 */

int print_env(char **args UNUSEDVAR)
{
	unsigned int i;

	i = 0;
	while (environ[i] != NULL)
	{
		printf("%s\n", environ[i++]);
	}
	return (1);
}
