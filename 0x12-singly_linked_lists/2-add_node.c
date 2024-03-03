#include "lists.h"


/**
 *	_strlen - get length of string
 * @s: string
 * Return: num
 */

int _strlen(const char *s)
{
	int i;

	for (i = 0; *s != '\0'; ++s)
	{
		++i;
	}
	return (i);
}


/**
 * add_node - add a node at the beginning of a linked list
 * @head: double pointer to
 * @str: string to add the struct
 * Return: pointer to the newly created node
 * Description: note that we could have used  single pointer
 * if the linked list is empty
 */


list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = (list_t *)malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->len = _strlen(str);
	new_node->str = strdup(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
