#include <stdio.h>
/**
 * main - prints the argc
 * @argc: argument counter
 * @argv: argument vector
 * Return: Always (0) Success
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
