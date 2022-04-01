#include "main.h"
/**
 * read_line - reads line from input
 * Return: string
 */
char *read_line(void)
{
	char *string;
	size_t bufsize = 0;

	string = (char *)malloc(sizeof(char) * bufsize);
	if (string == NULL)
	{
		perror("Error");
	}

	getline(&string, &bufsize, stdin);

	return (string);
}
