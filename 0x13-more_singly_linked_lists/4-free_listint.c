#include "lists.h"
/**
 * free_listint- frees an element from the list
 * @head: pointer to the index node
 * return: nil
 */
void free_listint(listint_t *head)
{
	listint_t *temp = head;

	while (head != NULL)
	{
		temp = head->next;
		temp = head;
		free(temp);
	}
}
