/**
  * _isdigit - check if c is an integer
  *@c: integer
  * Return: 0
  */

int _isdigit(int c)
{
        if (c >= 48 && c <= 57)
                return (1);

        else
                return (0);
}

/**
 * _atoi - converts a character string to an integer
 * @c: string
 * Return: the converted integral number as an int value
 */
int _atoi(char *c)
{
        int value = 0;
        int sign = 1;

        if (*c == '+' || *c == '-')
        {
                if (*c == '-')
                {
                sign = -1;
                }
                c++;
        }
        while (_isdigit(*c))
        {
                value *= 10;
                value += (int) (*c - '0');
                c++;
        }
	return (value * sign);
}

