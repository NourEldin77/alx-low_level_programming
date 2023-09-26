#include "lists.h"

/**
 * listint_len - return len
 * @h: pointer to list
 * Return: len
 */

size_t listint_len(const listint_t *h)
{
	size_t len = 0;
	const listint_t *crr = h;

	while (crr != NULL)
	{
		len++;
		crr = crr->next;
	}
	return (len);
}
