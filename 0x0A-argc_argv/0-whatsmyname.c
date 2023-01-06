#include <stdio.h>
#include "main.h"

/**
 * main - program that prints its name, followed by a new line.
 * @argc: count arguments
 * @argv: arguments
 *
 * Return: success
 */
int main(int argc, char *argv[])
{
(void) argc;
printf("%i\n", argc - 1);
return (0);
}
