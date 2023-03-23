#include "main.h"
/**
 * _memset -the file memory
 * @s: the string
 * @b: the constant byte
 * @n: length of buffer
 * Return: the string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
