#include "main.h"
/**
 * flip_bits- returns the number of bits to flip
 * @n: first numb
 * @m: second numb
 *
 * Return: number of bit to fli[p
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int temp = n ^ m;
	unsigned int read = 0;

	if (temp > 0)
	{
		read += temp & 1;
		temp >>= 1;
	}
	return (read);
}
