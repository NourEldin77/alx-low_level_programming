#include "lists.h"

/**
 * print_list - prints all the elements of list
 * @h: pointer to head of list_t
 * Return: length of the linked list
 */
size_t print_list(const list_t *h)
{
	size_t length;

	for (length = 0; h != NULL ; length++)
	{
		if (h->str)
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		else
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		h = h->next;
	}
	return (length);
}
