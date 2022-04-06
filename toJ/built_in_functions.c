#include "main.h"
/**
 * check_built_in - check built in functions
 * @arg :yes
 * Return: yes
 */
int (*check_built_in)(char *arg)
{
	built_in fncs[] = {
		{"exit", exit_terminal},
		{"env", print_env},
		{NULL, NULL}
	};

	int i;

	for (i = 0; fncs[i].cmd; i++)
	{
		if (fncs[i].cmd == arg)
			return (fncs[i].f);
	}
	return (NULL);
}

