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

	toExec = find_dir(toExec);

	if (toExec != NULL)
		return (toExec);

	return (NULL);
}
/**
 * find_dir - finds dir
 *
 * @toExec: sending to exec function to execute
 * Return: execute args for exec function
 */
char **find_dir(char **toExec)
{
	list *pathSLL, *PtrtoSLL;
	struct stat st;
	char *newDir;

	PtrtoSLL = malloc(sizeof(list));
	pathSLL = malloc(sizeof(list));

	pathSLL = pathToSLL();
	PtrtoSLL = pathSLL;

	while (PtrtoSLL != NULL)
	{
		newDir = _strcat(PtrtoSLL->dir, "/");
		newDir = _strcat(newDir, toExec[0]);

		printf("ptr to sll is %s\n", newDir);

		if (stat(newDir, &st) == 0)
		{
			toExec[0] = newDir;
			break;
		}
		PtrtoSLL = PtrtoSLL->next;
	}

	return (toExec);
}
