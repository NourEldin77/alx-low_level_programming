#include <stdio.h>

/**
 * main - prints out the first 98 Fibonacci numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	unsigned long n1 = 0, n2 = 1, n3;
	unsigned long n1_high1, n1_high2, n2_high1, n2_high2;
	unsigned long high1, high2;

	for (i = 0; i < 92; i++)
	{
		n3 = n1 + n2;
		printf("%lu, ", n3);
		n1 = n2;
		n2 = n3;
	}
	n1_high1 = n1 / 10000000000;
	n2_high1 = n2 / 10000000000;
	n1_high2 = n1 % 10000000000;
	n2_high2 = n2 % 10000000000;
	for (i = 93; i < 99; i++)
	{
		high1 = n1_high1 + n2_high1;
		high2 = n1_high2 + n2_high2;
		if ((n1_high2 + n2_high2) > 9999999999)
		{
			high1 += 1;
			high2 %= 10000000000;
		}
		printf("%lu%lu", high1, high2);
		if (i != 98)
		{
			printf(", ");
		}
		n1_high1 = n2_high1;
		n1_high2 = n2_high2;
		n2_high1 = high1;
		n2_high2 = high2;
	}
	putchar('\n');
	return (0);
}
