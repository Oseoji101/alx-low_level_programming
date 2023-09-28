#include "main.h"
/**
 * clear_bit- sets the value of a bit to 0 at a given index.
 * @index: the index, starting from 0
 * @n: number
 *
 * Return: 1 if success or -1 if fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask = 0;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	 mask = ~(1UL << index);
	*n = *n & mask;
	return (1);
}
