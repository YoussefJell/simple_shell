#include "main.h"
/**
 * split_str - splits string into array of elements for execution
 * @line: string input from read_line
 * Return: Array of elements to execute
 */
char **split_str(char *input, char *delimiter)
{
	char *token;
	char **newToks;
	int count = 0;

	newToks = malloc(sizeof(char *) * 64);

	token = strtok(input, delimiter);
	while (token != NULL)
	{
		newToks[count] = token;
		token = strtok(NULL, delimiter);
		count++;
	}
	newToks[count] = token;

	return (newToks);
}
