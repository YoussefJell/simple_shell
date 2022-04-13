#include "main.h"
#define UNUSEDVAR __attribute__((unused))
/**
 * execute_arg - executes arguments from split
 * @args: arguments to execute
 * @splitPath: path value
 * @string: string input from read_line
 * Return: 1 for loop
 */
int execute_arg(char **args, char **splitPath, char *string UNUSEDVAR)
{
	pid_t child;
	int status;

	if (args[0] == NULL)
		return (1);
	if (args[0] != NULL)
	{	
		if (_strcmp(args[0], "exit") == 0)
			exit(0);
	}
	args[0] = check_path(args[0], splitPath);
	if (args[0] != NULL)
	{
		child = fork();
		if (child < 0)
		{
			free(args[0]);
			perror("Error in forking");
		}

		if (child == 0)
		{
			if (execve(args[0], args, environ) == -1)
			{
				free(args[0]);
				perror("./hsh");
			}
			exit(-1);
		}
		else
		{
			wait(&status);
		}
	}
	else
	{
		perror("./hsh");
	}
	return (1);
}
