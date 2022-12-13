#include "main.h"
/**
 * print_alphabet_x10 - print all alphabet x10
 */
void print_alphabet_x10(void)
{
	char i, letters;

	for (i = '0'; i <= '9'; i++)
	{
	for (letters = 'a'; letters <= 'z'; letters++)
	{
	_putchar(letters);
	}
_putchar('\n');
	}
}
