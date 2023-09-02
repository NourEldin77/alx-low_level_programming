#include "main.h"
/**
 * main -  prints the minimum number of coins to make change
 * @argc: length
 * @argv: arr
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int i, num, numCoins, coins[5] = {25, 10, 5, 2, 1}, count;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	numCoins = sizeof(coins) / sizeof(coins[0]);
	count = 0;

	for (i = 0; i < numCoins; i++)
	{
		while (num >= coins[i])
		{
			count++;
			num -= coins[i];
		}
	}
	printf("%d\n", count);
	return (0);
}

