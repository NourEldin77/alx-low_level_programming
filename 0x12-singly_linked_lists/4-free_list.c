#include "lists.h"

/**
 * free_list - free all mem that allocated for the linked list
 * @head: pointer to head of the list
 * Return: void
 */
void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->next);
		if (head->str)
			free(head->str);
		free(head);
	}
}
