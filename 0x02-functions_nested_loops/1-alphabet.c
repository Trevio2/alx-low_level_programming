#include "main.h"

/**
 * main - entry function
 * print alphabet - print alphabet in lowercase
 * Return: 0
 */
void print_alphabet(void)
{
	char (letters);

	for (letters = 'a'; letters <= 'z'; letters++)
		_putchar(letters);
	_putchar('\n');
}
