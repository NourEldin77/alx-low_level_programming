#include "lists.h"

/**
 * print_listint - print all the elements of struct list
 * @h: pointer to the list
 * Return: len
 */

size_t print_listint(const listint_t *h)
{
	size_t len = 0;
	const listint_t *crr;

	crr = h;
	while (crr != NULL)
	{
		printf("%d\n", crr->n);
		crr = crr->next;
		len++;
	}
	return (len);
}
