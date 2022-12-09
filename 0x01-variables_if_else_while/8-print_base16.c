#include <stdio.h>
/**
 * main - entry
 * Return: 0
 */
int main(void)
{
char c;
int num;
for (num = '0'; num < 17; num++)
{
if (num < 10)
{
putchar(num + '0');
}
else
{
putchar(c);
c++;
}
}
putchar('\n');
return (0);
}
