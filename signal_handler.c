#include "main.h"
#define UNUSEDVAR __attribute__((unused))
/**
 * handler - Handles SIGINT signal
 * @num: integer parameter
 * Return: void
 */
void handler (int num UNUSEDVAR)
{
        write(STDOUT_FILENO, "\n($) ", 5);
}
