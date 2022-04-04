#include "main.h"
/**
 * execute_arg - executes arguments from split
 *
 * @args: arguments to execute
 * @env: environment variable from main
 * @filename: filename from main
 * Return: 1 for loop
 */
int execute_arg(char **toExec)
{
	pid_t child;
	int status;

	child = fork();

	if (child == 0)
	{
		if (execve(toExec[0], toExec, environ) == -1)
		{
			printf("cant use %s\n", toExec[0]);
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
