#include "main.h"
/**
 * _puts - function that prints a string
 * @s: the parameter for function
 */
void _puts(char *s)
{
	for (; *s != '\0'; s++)
	{
		_putchar(*s);
	}
	_putchar('\n');
}
