#include "lists.h"

/**
 * listint_len -returns number of elements in listint_t list
 * @h: - header pointer
 *
 * Return: number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t numb = 0;

	while (h != NULL)
	{
		h = h->next;
		numb++;
	}

	return (numb);
}
