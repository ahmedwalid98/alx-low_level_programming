#include "main.h"
/**
 * _atoi - Prints the integer inside the string
 * @s: String to be converted
 * Return: The integer value
 */
int _atoi(char *s)
{
	int i = 0, result = 0, nsign = 0;

	while (*(s + i) != '\0')
	{
		if (s[i] == '-')
		{
			nsign++;
		}

		if (s[i] >= 48 && s[i] <= 57)
		{
			result = result * 10 + (s[i] - '0');
			if (s[i + 1] > 57 || s[i + 1] < 48)
			{
				break;
			}
		}
		i++;
	}
	if (nsign % 2 != 0)
	{
		result = -result;
	}
	return (result);
}
