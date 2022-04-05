#include "main.h"
/**
 * execute_arg - executes arguments from split
 *
 * @args: arguments to execute
 * @env: environment variable from main
 * @filename: filename from main
 * Return: 1 for loop
 */
int execute_arg(char **args, char **splitPath)
{
	pid_t child;
	int status;

	if (args[0] == NULL)
		return (1);
	if (_strcmp(args[0], "exit") == 0)
		return (0);
	if (_strcmp(args[0], "env") == 0)
	{
		print_env();
		return (1);
	}
	args[0] = check_path(args[0], splitPath);
	if (args[0] != NULL)
	{
		child = fork();
		if (child < 0)
			perror("Error in forking");

		if (child == 0)
		{
			if (execve(args[0], args, environ) == -1)
			{
				perror("Execute");
			}
			exit(-1);
		}
		else
			wait(&status);
	}
	else
		perror("Error");
	return (1);
}
