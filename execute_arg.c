#include "main.h"
/**
 * execute_arg - executes arguments from split
 *
 * @args: arguments to execute
 * @env: environment variable from main
 * @filename: filename from main
 * Return: 1 for loop
 */
int execute_arg(char **args, char **env, char *filename)
{
	pid_t child;
	int status;
	char *parsedPath;

	if (args[0] == NULL)
		return (1);

	if (_strcmp(args[0], "exit") == 0)
		return (0);

	if (_strcmp(args[0], "env") == 0)
	{
		print_env();
		return (1);
	}

	child = fork();

	if (child == 0)
	{
		parsedPath = parse_path(args[0]);
		if (execve(parsedPath, args, env) == -1)
		{
			printf("%s: 1: %s: not found\n", filename, args[0]);
		}
		exit(-1);
	}
	else if (child < 0)
	{
		perror("Error in forking");
	}
	else
	{
		wait(&status);
	}
	return (1);
}
