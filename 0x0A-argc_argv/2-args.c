#include <stdio.h>
#include "main.h"
/**
 * main - program that prints its name, followed by a new line.
 * @argc: count arguments
 * @argv: arguments
 * Return: success
 */
int main(int argc, char *argv[])
{
	int count = 0;

	if (argc > 0)
	{
		while (count < argc)
		{
			printf("%s\n", argv[count]);
			count++;
		}
	}
	return (0);
}
