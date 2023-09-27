#include "lists.h"
/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;

	listint_t *present = *head;

	while (present != NULL)
	{
		listint_t *next_node = present->next;

		present->next = prev;

		prev = present;
		present = next_node;
	}

	*head = prev;
	return (*head);
}

