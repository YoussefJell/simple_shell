#include "main.h"
/**
 * checker - checks and gets it ready to execute
 * @toCheck: string to check
 * Return: 2d array to execute
 */
char **checker(char *toCheck)
{
	char *splitStr, *delimit = " \t\r\n\a";
	char **toExec;
	int count;

	toExec = malloc(sizeof(char *) * 64);
	if (toExec == NULL)
	{
		perror("toExec alloc");
	}

	splitStr = strtok(toCheck, delimit);
	while (splitStr != NULL)
	{
		toExec[count] = _strdup(splitStr);
		splitStr = strtok(NULL, delimit);
		count++;
	}
	toExec[count] = splitStr;

	if (toExec[0] == NULL)
		return (NULL);

	if (_strcmp(toExec[0], "exit") == 0)
		exit(0);

	if (_strcmp(toExec[0], "env") == 0)
	{
		print_env();
	}

	toExec[0] = parse_path(toExec[0]);
	printf("toexec is %s\n", toExec[0]);

	return (toExec);
}
