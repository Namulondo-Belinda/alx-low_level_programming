#include "lists.h"

/**
 * add_nodeint_end - this adds a node at the end of a linked list.
 * @head: this represents a pointer to the first element in the list.
 * @n: this is the  data to insert into the new element.
 *
 * Return: a pointer to the new node, or NULL if it's a fai.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
