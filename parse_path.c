#include "main.h"

char *parse_path(char *firstArg)
{
	char *path, **splitPath, *newPath;
	int i = 0;
	struct stat st;

	path = _getenv("PATH");
	if (path)
	{
		splitPath = split_str(path);
	}

	while (splitPath[i] != NULL)
	{
		newPath = _strcat(splitPath[i], "/");
		newPath = _strcat(splitPath[i], firstArg);
		if (stat(newPath, &st) == 0)
		{
			return (newPath);
		}
		newPath = NULL;
		i++;
	}

	return (NULL);
}