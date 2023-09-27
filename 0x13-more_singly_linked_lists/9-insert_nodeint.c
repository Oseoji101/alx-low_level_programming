#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node
 * @idx: index of the list where the new node should be added
 * @n: data in the newnode
 *
 * Return: the newnode, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j;
	listint_t *newnode;
	listint_t *tempo = *head;

	newnode = malloc(sizeof(listint_t));
	if (!newnode || !head)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}

	for (j = 0; tempo && j < idx; j++)
	{
		if (j == idx - 1)
		{
			newnode->next = tempo->next;
			tempo->next = newnode;
			return (newnode);
		}
		else
			tempo = tempo->next;
	}

	return (NULL);
}
