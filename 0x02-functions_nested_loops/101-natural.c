#include "main.h"
/**
 * main - prints the sum of all multiples of 3 or 5
 * Return: Always (0) Success
 */
int main(void)
{
	int i = 1;
	int sum = 0;

	do {
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
		i++;
	} while (i < 1024);
	printf("%d\n", sum);
	return (0);
}
