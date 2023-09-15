#include "variadic_functions.h"
/**
 * print_all - print argument
 * @format: c or i or f or s
 * Return: void
 */
void print_all(const char *const format, ...)
{
	int i;
	char *cp;
	char c;
	va_list ap;

	va_start(ap, format);
	i = 0;
	while (format && format[i])
	{
		switch (format[i])
		{
				case 'c':
				c = (char) va_arg(ap, int);
				printf("%c", c);
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", (float) va_arg(ap, double));
				break;
			case 's':
				cp = va_arg(ap, char*);
				printf("%s", cp == NULL ? "(nil)" : cp);
				break;
			default:
				i++;
				continue;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i]
					== 's') &&
			format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	va_end(ap);
	printf("\n");
}
