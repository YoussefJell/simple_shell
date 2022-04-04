#include "main.h"

char *to_read(void)
{
	char *string;
	int input;
	size_t bufsize = 0;

	string = (char *)malloc(sizeof(char) * bufsize);
	if (string == NULL)
	{
		perror("Error");
	}
	input = getline(&string, &bufsize, stdin);
	if (input == -1)
	{
		exit(0);
	}
	return (string);
}
