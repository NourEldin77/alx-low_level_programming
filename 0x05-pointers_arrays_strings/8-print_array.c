#include "main.h"
/**
 * print_array - print arr
 * @n: num
 * @a: str
 * Return: Always (0) Success
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
