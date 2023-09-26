#include "lists.h"
/**
 * free_listint- frees an element from the list
 * @head: pointer to the index node
 *
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		temp = head->next;
		temp = head;
		free(temp);
	}
}
