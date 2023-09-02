#include "main.h"
/**
 * main - adds positive number
 * @argc: lenght of arguments
 * @argv: array of arguments
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int i, num, total = 0, y;

	if (argc >= 1)
	{
		for (i = 1; i < argc; i++)
		{	
			for (y = 0; argv[i][y] != '\0'; y++)
			{
				num = atoi(argv[i][y]);
				if (num)
				{
					total += atoi(argv[i]);
				}
				else
				{
					printf("Error\n");
					return (1);
				}
			}
		}
		printf("%d\n", total);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
