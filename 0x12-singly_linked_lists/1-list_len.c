#include "lists.h"

/**
 * list_len - get number of elements in linked list
 * @h: pointer of type list_t pointer to list
 * Return: length of the linked list
 */

size_t list_len(const list_t *h)
{
	size_t length;

	for (length = 0; h != NULL; length++)
	{
		h = h->next;
	}
	return (length);
}
