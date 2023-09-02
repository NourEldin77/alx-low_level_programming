#include "main.h"
/**
 * main -  prints the minimum number of coins to make change for an amount of money.
 * @argc: length
 * @argv: arr
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int i, num = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (num < 0)
	{
		printf("0\n");
	}
	else
	{
		if (num > 25)
		{
			
		}
	}
}
