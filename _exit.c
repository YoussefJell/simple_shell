#include "main.h"
/**
 * exit_terminal - exit the program
 * @args: arguments to execute
 * @splitPath: path value
 * @string: string input from read_line
 * Return: 0
 */
int exit_terminal(char **args, char **splitPath, char *string)
{
	int i;

	if (args[1] != NULL)
	{
		i = _atoi(args[1]);
		free(args);
		free(splitPath);
		free(string);
		exit(i);
	}
	free(args);
	free(splitPath);
	free(string);
	exit(0);
	return (0);
}
