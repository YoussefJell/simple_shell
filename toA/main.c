#include "main.h"

int main(int argc UNUSEDVAR, char **argv UNUSEDVAR)
{
	char *toCheck, **toExec;
	int status;

	while (status)
	{
		if (isatty(STDIN_FILENO))
			write(STDOUT_FILENO, "($) ", 4);

		toCheck = to_read();
		toExec = checker(toCheck);
		status = execute_arg(toExec);
		status = 1;
	}
	return (0);
}
