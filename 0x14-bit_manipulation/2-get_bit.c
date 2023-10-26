#include "main.h"
/**
 * get_bit- returns the value of a bit at a given index
 * @index: is the index, starting from 0 of the bit
 * @n: number to
 *
 * Return: value of the bit at index index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int valuebit;

	if (index > 63)
		return (-1);

	valuebit = (n >> index) & 1;

	return (valuebit);
}
