#include "main.h"
/**
 * split_str - splits string into array of elements for execution
 * @line: string input from read_line
 * Return: Array of elements to execute
 */
char **split_str(char *line)
{
	char *saveStr, *delimit = " \t\r\n\a:";
	char **argv;
	int count;

	argv = malloc(sizeof(char *) * 64);
	if (line == NULL)
	{
		perror("Error");
	}

	saveStr = strtok(line, delimit);
	while (saveStr != NULL)
	{
		argv[count] = strdup(saveStr);
		saveStr = strtok(NULL, delimit);
		count++;
	}
	argv[count] = saveStr;

	return (argv);
}
