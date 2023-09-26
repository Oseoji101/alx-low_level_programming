#include "lists.h"
/**
 * add_nodeint - add newnode at the biginning of a new line
 * @head: pointer to the new node
 *
 * @n: sets data in the new node
 * Return: newnode
 */
listint_t *add_nodeint(listint_t **head, const int n)

{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
