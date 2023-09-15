#include "variadic_functions.h"
/**
 * print_all - print argument
 * @format: c or i or f or s
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list pa;
	int i = 0;
	char *c;

	va_start(pa, format);
	while (format != NULL &&  format[i] != '\0')
	{
		switch (format[i])
		{
			if (i > 0 && (format[i] == 'c' || format[i] == 'i' ||
			      format[i] == 'f' || format[i] == 's'))
			{
			printf(", ");
			}
			case 'c':
				printf("&c%c", (char)va_arg(pa, int));
				break;
			case 'i':
				printf("&i%d", va_arg(pa, int));
				break;
			case 'f':
				printf("&f%f", va_arg(pa, double));
				break;
			case 's':
				c =  va_arg(pa, char *);
				printf("%s", c !=  (char *)NULL ? c : "(nil)");
				break;
			default:
				i++;
				continue;
		}
		i++;
	}
	va_end(pa);
	printf("\n");
}
