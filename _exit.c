#include "main.h"
/**
 * exit_terminal - exit the program
 * @args: arguments to execute
 * Return: 0
 */
int exit_terminal(char **args)
{
	int i;

	if (args[1] != NULL)
	{
		i = _atoi(args[1]);
		exit(i);
	}
	exit(0);
	return (0);
}
