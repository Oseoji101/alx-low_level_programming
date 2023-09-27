#include "lists.h"
/**
 * delete_nodeint_at_index - deletes node at index of a linked list
 * @head: Pointer to index node
 * @index: node to be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tempor = *head;
	listint_t *present = NULL;
	unsigned int h = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tempor);
		return (1);
	}

	while (h < index - 1)
	{
		if (!tempor || !(tempor->next))
			return (-1);
		tempor = tempor->next;
		h++;
	}


	present = tempor->next;
	tempor->next = present->next;
	free(present);

	return (1);
}
