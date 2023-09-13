#include "3-calc.h"
#include "main.h"
#include <string.h>
/**
 * get_op_func - dosomething
 * @s: any
 * Return: int pointer to function
 */
int (*get_op_func(char *s))(int, int)
{
	int x = 0;
	op_t op_Struct[] = {
	{ "+", op_add },
	{ "-", op_sub },
	{ "*", op_mul },
	{ "/", op_div },
	{ "%", op_mod },
	{ NULL, NULL }
	};

	while (x < 5)
	{
		if (strcmp(s, op_Struct[x].op) == 0)
		{
			return (op_Struct[x].f);
		}
		x++;
	}
	return (NULL);
}
