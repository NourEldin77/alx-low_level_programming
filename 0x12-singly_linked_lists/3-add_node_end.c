#include "lists.h"

/**
 * add_node_end - append node to the linked list
 * @head: double pointer to the list
 * @str:str to be copied to the new node
 * Return: pointer to new created node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = (list_t *)malloc(sizeof(list_t));
	list_t *last_node = *head;

	if (new_node == NULL)
		return (NULL);
	new_node->len = strlen(str);
	new_node->str = strdup(str);
	if (new_node->str == NULL)
		return (NULL);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (last_node->next != NULL)
	{
		last_node = last_node->next;
	}
	last_node->next = new_node;
	return (new_node);
}
