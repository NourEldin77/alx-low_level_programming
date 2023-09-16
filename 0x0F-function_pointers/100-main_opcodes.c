#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: counter
 * @argv: vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int (*mainfunc)(int, char **) = main;
	unsigned char c;
	int num_of_bytes, i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	num_of_bytes = atoi(argv[1]);
	if (num_of_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < num_of_bytes; i++)
	{
		c = *(unsigned char *)mainfunc;
		printf("%.2x", c);
		if (i == num_of_bytes - 1)
		{
			continue;
		}
		printf(" ");
		mainfunc++;
	}
	printf("\n");
	return (0);
}
