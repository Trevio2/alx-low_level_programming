#include <stdio.h>
/**
 * main - entry
 * Return: 0
 */
int main(void)
{
int num;
for (num = 5; num < 12; num++)
{
putchar(num + '0');
}
putchar('\n');
return (0);
}
