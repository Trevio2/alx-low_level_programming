#include "main.h"
/**
 * _atoi - function that convert a string to an integer
 * @s: the integer
 * Return: success
 */
int _atoi(char *s)
{
	int sign;
	unsigned int num;
	char *work;

	work = s;
	num = 0;
	sign = 1;
	while (*work != '\0' && (*work < '0' || *work > '9'))
	{
		if (*work == '-')
			sign *= -1;
		work++;
	}
	if (*work != '\0')
	{
		do {
			num = num * 10 + (*work - '0');
			work++;
		} while (*work >= '0' && *work <= '9');
	}
	return (num * sign);
}
