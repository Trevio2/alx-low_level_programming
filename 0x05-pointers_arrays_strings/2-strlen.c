#include "main.h"
#include <string.h>

/**
 * _strlen - function that returns the length of a string.
 * @s: string length
 * Return: length of string
 */

int _strlen(char *s)
{
	int len;

	for (; *s != '\0'; s++)
	{
	len += 1;
	}
	return (len);
}
