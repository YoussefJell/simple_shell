#include "main.h"
/**
 * split_path - splits path into different sections
 * @path: path
 * Return: Array of pointer to paths
 */
char **split_path(char *path)
{
	char *saveStr, *delimit = ":\n";
	char **argv;
	int count;

	argv = malloc(sizeof(char *) * 64);
	if (path == NULL)
	{
		perror("Error");
	}

	saveStr = strtok(path, delimit);
	while (saveStr != NULL)
	{
		argv[count] = strdup(saveStr);
		saveStr = strtok(NULL, delimit);
		count++;
	}
	argv[count] = saveStr;

	return (argv);
}
