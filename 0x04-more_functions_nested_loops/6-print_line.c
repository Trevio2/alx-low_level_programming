#include "main.h"

/**
 * print_line - function that draws a straight line
 * @n: the character
 */
void print_line(int n)
{
	int x;

	if (n <= 0)
	_putchar('\n');
	for (x = 0; x <= n; x++)
	_putchar('_');
	_putchar('\n');
}
