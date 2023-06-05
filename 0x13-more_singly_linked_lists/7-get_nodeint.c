#include "lists.h"

/**
 * get_nodeint_at_index - this returns the node at an index in a linked list.
 * @head: this represents the first node in the linked list.
 * @index: The index of the node to return.
 *
 * Return: a pointer to the node being searched for, or NULL if it's a fail.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
