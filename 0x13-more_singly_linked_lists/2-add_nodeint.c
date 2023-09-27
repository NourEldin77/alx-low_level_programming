#include "lists.h"

/**
 * add_nodeint - add new node at the beginning of list
 * @head: new head pointer
 * @n: data
 * Return: address or NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *crr = malloc(sizeof(listint_t));

	if (crr == NULL)
	{
		return (NULL);
	}

	crr->n = n;
	crr->next = *head;
	*head = crr;

	return (crr);
}
