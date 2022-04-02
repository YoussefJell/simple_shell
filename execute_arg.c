#include "main.h"
/**
 * execute_arg - executes arguments from split
 *
 * @args: arguments to execute
 * @env: environment variable from main
 * Return: 1 for loop
 */
int execute_arg(char **args, char **env)
{
	pid_t child;
	int status;
	char *parsedPath;

	if (args[0] == NULL)
		return (1);

	child = fork();

	if (child == 0)
	{
		parsedPath = parse_path(args[0]);
		if (execve(parsedPath, args, env) == -1)
		{
			perror("./hsh");
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
