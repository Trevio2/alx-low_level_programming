#include "main.h"
/**
 * _lowercase - check if character is lower case
 * &c: character
 * Return: 1 if letter is lowercase, 0 if not lowercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else 
		return (0);
}
