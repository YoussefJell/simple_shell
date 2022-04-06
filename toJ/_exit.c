#include "main.h"
/**
 * _exit - exit the program
 * @arg_zero: exit
 * @arg_one: integer used to exit the shell
 * Return: void
 */
int exit_terminal(char *arg_one)
{
	int i;

	if (arg_one != NULL)
	{
		i = _atoi(arg_one);
		exit (i);
	}
	exit (0);
	return (0);
}
