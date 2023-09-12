#include "main.h"
#include <unistd.h>

int _isdigit(int c);
void print_Error(void);
int _strlen(char *s);


/**
 * _strlen - get length of string
 * @s: string
 * Return: num
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; ++s)
	{
		++i;
	}
	return (i);
}


/**
 * _isdigit - take int to check if it digit number or not "Helper"
 * @c: int
 * Return: (0) or (1)
 */

int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
	{
		return (1);
	}
	return (0);
}


/**
 * print_Error - without using printf print Error
 * Return: void
 */

void print_Error(void)
{
	int i;
	char c[] = "Error\n";

	for (i = 0; c[i] != '\0'; i++)
	{
		_putchar(c[i]);
	}
}


/**
 * multi - print num1 * num2
 * @n1: num1
 * @n2: num2
 * Return: void
 */

void multi(char *n1, char *n2)
{
	int length1 = _strlen(n1), length2 = _strlen(n2), total = length1 + length2;
	int x, y, z, carry, fdigit, sdigit, product;
	int start = 0, i;
	int *resArr = (int *)malloc(total * sizeof(int));

	if (resArr != NULL)
	{
		for (x = 0; x < total; x++)
		{
			resArr[x] = 0;
		}
		for (y = length1 - 1; y >= 0; y--)
		{
			carry = 0;
			fdigit = n1[y] - '0';
			for (z = length2 - 1; z >= 0; z--)
			{
				sdigit = n2[z] - '0';
				product = resArr[y + z + 1] + (fdigit * sdigit) + carry;
				resArr[y + z + 1] = product % 10;
				carry = product / 10;
			}
			resArr[y] += carry;
		}
		while (start < total && resArr[start] == 0)
		{
			start++;
		}
		for (i = start; i < total; i++)
		{
			_putchar(resArr[i] + '0');
		}
			_putchar('\n');
	}
	free(resArr);
}


/**
 * main - Entry point
 * @argc: argument counter
 * @argv: argument vector
 * Return: (0) when Success and print the resualt
 */

int main(int argc, char *argv[])
{
	int i, y;
	char *num1 = argv[1];
	char *num2 = argv[2];

	if (argc != 3)
	{
		print_Error();
		exit(98);
	}
	for (i = 1; i < argc; i++)
	{
		for (y = 0; argv[i][y] != '\0'; y++)
		{
			if (!_isdigit(argv[i][y]))
			{
				print_Error();
				exit(98);
			}
		}
	}
	if (*num1 == '0' || *num2 == '0')
	{
		_putchar('0');
		_putchar('\n');
	}
	else
	{
		multi(num1, num2);
	}
	return (0);
}
