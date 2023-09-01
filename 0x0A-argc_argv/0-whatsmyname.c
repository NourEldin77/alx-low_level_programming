#include "main.h"
/**
 * main - prints the exe file name
 * @argc: argument counter
 * @argv: argument vector
 * Return: Always (0) Success
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc >= 1 && argv[0][0] != '\0')
	{
		for (i = 0; argv[0][i] != '\0'; i++)
		{
			_putchar(argv[0][i]);
		}
	}
	_putchar('\n');
	return (0);
}
