#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: Prints the size of data types
 * Return: Always 0 (Success)
 */
int main(void)
{
char charType;
int  intType;
long int longIntType;
long long int dLongType;
float floatType;
	printf("Size of a char: %zu byte(s)\n", sizeof(charType));
	printf("Size of an int: %zu byte(s)\n", sizeof(intType));
	printf("Size of a long int: %zu byte(s)\n", sizeof(longIntType));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(dLongType));
	printf("Size of a float: %zu byte(s)\n", sizeof(floatType));
		return (0);
}
