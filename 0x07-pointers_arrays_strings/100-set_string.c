#include "main.h"
/**
 * set_string - function that sets the value of a pointer to a char.
 * @s: pointer to pointer
 * @to: the char
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
