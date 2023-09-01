#include "main.h"
/**
 * main - mult number
 * @argc: lenght of arguments
 * @argv: array of arguments
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int total;

	if (argc == 3)
	{
		total = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", total);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
