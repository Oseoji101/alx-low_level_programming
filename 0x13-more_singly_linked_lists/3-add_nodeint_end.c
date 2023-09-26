#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a list
 * @head:pointer to the head of a list
 * @n: data to be added in the new node
 *
 * Return: newend
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newend;

	listint_t *temp = *head;

	newend = malloc(sizeof(listint_t));

	if (newend == NULL)
	{
		return (NULL);
	}

	newend->n = n;
	newend->next = NULL;

	if (*head == NULL)
	{
		*head = newend;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newend;
	}
	return (newend);
}
