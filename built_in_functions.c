#include "main.h"
/**
 * check_built_in - check built in functions
 * @args : arguments to execute
 * Return: return value from the specified function
 */
int check_built_in(char **args)
{
	built_in fncs[] = {
		{"exit", exit_terminal},
		{"env", print_env},
		{NULL, NULL}
	};

	int i;

	if (args != NULL)
	{
		for (i = 0; fncs[i].cmd != NULL; i++)
		{
			if (_strcmp(fncs[i].cmd, args[0]) == 0)
			{
				return ((fncs[i].f)(args));
			}
		}
	}
	return (0);
}

