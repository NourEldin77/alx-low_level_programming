#include "lists.h"
/**
 * dlistint_len - get length of linked list
 * @h: pointer to struct
 * Return: length of the linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	 size_t len = 0;

	for (; h != NULL; len++)
	{
		h = h->next;
	}
	return (len);
}
