#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the list
 *
 * Return: int data
 */
int pop_listint(listint_t **head)
{

	listint_t *temp;
	int j;

	if (*head == NULL)
	{
		return (0);
	}

	j = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (j);

}
