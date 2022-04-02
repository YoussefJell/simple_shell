#include "main.h"
#define UNUSEDVAR __attribute__((unused))
/**
 * main - Simple_shell for holberton
 *
 * @UNUSEDVAR: unused argc
 * @UNUSEDVAR: unused argv
 * @env: environment variable
 * Return: 0 (Success)
 */
int main(int ac UNUSEDVAR, char **av UNUSEDVAR, char **env)
{

	char *string;
	char **args;
	int status;

	while (status)
	{
		printf("($) ");

		string = read_line();
		args = split_str(string);
		status = execute_arg(args, env);

		free(string);
		free(args);
	}
	return (0);
}
