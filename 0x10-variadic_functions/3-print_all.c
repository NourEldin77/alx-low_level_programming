#include "variadic_functtions.h"
/**
 * print_all - print argument
 * @format: c or i or f or s
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list pa;
	int i = 0;

	va_start(pa, format);
	while (format != NULL &&  format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%s", va_arg(pa, char));
				break;
			case 'i':
				printf("%d", va_arg(pa, int));
			case 'f':
				prinf("%f", va_arg(pa, float));
			case 's'
				printf("%s", va_arg(pa, char*));
				
		}
	}
}
