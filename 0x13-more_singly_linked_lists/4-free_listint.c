#include "lists.h"

/**
 * free_listint - free the allocated mem for a linked list
 * @head: pointer to the head item in the list
 * Return: void
 */

void free_listint(listint_t *head)
{
	if (head != NULL)
	{
		free_listint(head->next);
		free(head);
	}
}
