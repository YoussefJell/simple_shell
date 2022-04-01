#include "main.h"
/**
 * print_env - prints environment (builtin)
 * @env: environment
 */
void print_env(char **env)
{
    unsigned int i;

    i = 0;
    while (env[i] != NULL)
    {
        printf("%s\n", env[i++]);
    }
}
