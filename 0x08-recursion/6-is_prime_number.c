#include "main.h"

int is_divisible(int num, int div);
int is_prime_number(int n);

/**
 * is_divisible - function that returns 1 if the input integer is prime
 * otherwise 0
 * @num: The number
 * @div: the divisor
 * Return: If the number is divisible - 0.
 * If the number is not divisible - 1
 */
int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);
	if (div == num / 2)
		return (1);
	return (is_divisible(num, div + 1));
}
