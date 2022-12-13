#include <stdio.h>
/**
 * numlength - returns the length of string
 * @num: operator number
 * Return: number of digit
 */
int numlength(int num)
{
	int length = 0;

	if (!num)
	{
	return (1);
	}
	while (num)
	{
	num = num / 10;
	length += 1;
	}
	return (length);
}
/**
 * main - print the first 98 fibonaci sequences
 * Return: 0
 */
int main(void)
{
	unsigned long f1 = 1, f2 = 2, tmp, mx = 100000000, f10 = 0, f20 = 0, tmpo = 0;
	short int i = 1, initialos;

	while (i <= 98)
	{
	if (f10 = 0)
	printf(
