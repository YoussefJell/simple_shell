#include "main.h"
#define UNUSEDVAR __attribute__((unused))
/**
 * print_env - prints environment
 * args: arguments to execute
 * @UNUSEDVAR: unused args
 * Return: none
 */
int change_directory(char **args, char **splitPath UNUSEDVAR, char *string UNUSEDVAR)
{
	if (args[0] != NULL && args[1] != NULL)
	{
		chdir(args[1]);
	}
	return (1);
}
