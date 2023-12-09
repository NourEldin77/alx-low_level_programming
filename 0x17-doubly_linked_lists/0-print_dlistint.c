#include "lists.h"
/**
 * print_dlistint - print data in the double linked lists
 * @h: pointer to struct
 * Return: length of the linked list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t len = 0;

	for (; h != NULL; len++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (len);
}
