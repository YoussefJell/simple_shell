#include "main.h"
/**
 *
 *
 */
char *check_path(char *firstArg, char **splitPath)
{
	char *newArg;
	int i = 0;
	struct stat st;

	if (stat(firstArg, &st) == 0)
	{
		return (firstArg);
	}
	else
	{
		while (splitPath[i])
		{
			newArg = _strcat(splitPath[i], firstArg);
			if (stat(newArg, &st) == 0)
			{
				return (newArg);
			}
			i++;
		}
	}
	return (NULL);
}
