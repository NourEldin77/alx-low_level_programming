#include "main.h"
/**
 * flip_bits - how many moves need to flip
 * @n: from
 * @m: to
 * Return: moves
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int moves = 0, sub;

	sub = n ^ m;

	while (sub > 0)
	{
		moves += (sub & 1);
		sub >>= 1;
	}
	return (moves);
}
