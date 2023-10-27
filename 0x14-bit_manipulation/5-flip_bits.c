#include "main.h"
/**
 * flip_bits- returns the number of bits to flip
 * @n: first number
 * @m: second number
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int kelv;
	unsigned long int rota;

	kelv = n ^ m;

	for (rota = 0; kelv > 0;)
	{
		if ((kelv & 1) == 1)
		rota++;

		kelv = kelv >> 1;
	}
	return (rota);
}
