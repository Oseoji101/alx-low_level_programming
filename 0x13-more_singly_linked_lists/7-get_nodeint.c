#include "lists.h"
/**
 * get_nodeint_at_index -  returns the nth node of a linked list
 * @head: pointer to the first element of the list
 * @index: node starting at 0
 * Return: the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	unsigned int t = 0;

	while (head != NULL)
{
	if (t == index)
	{
		return (head);
	}
	head = head->next;
	t++;
}

return (NULL);
}
