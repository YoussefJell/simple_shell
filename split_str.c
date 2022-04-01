#include "main.h"

char **split_str(char *line)
{
	char *saveStr, *delimit = " \t\r\n\a";
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
