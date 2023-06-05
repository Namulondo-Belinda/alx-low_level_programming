#include "lists.h"

/**
 * free_listint2 - this element frees a linked list.
 * @head: a pointer to the listint_t list that is to be freed.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
