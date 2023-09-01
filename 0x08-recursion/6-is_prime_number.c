#include "main.h"
/**
 * is_prime_number - return 1 if the input prime
 * @n: input num
 * Return: (0) or (1)
 */
int is_prime_number(int n)
{
	return (_isprime(n, 2));
}

/**
 * _isprime - calc if it prime or no
 * @n: num to chekc
 * @d: num to increment and test with
 * Return: int resualt
 */
int _isprime(int n, int d)
{
	if (n < 2)
	{
		return (0);
	}
	if (d * d > n)
	{
		return (1);
	}
	if (n % d == 0)
	{
		return (0);
	}
	return (_isprime(n, d + 1));
}
