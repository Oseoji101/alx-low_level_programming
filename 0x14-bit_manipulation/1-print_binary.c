#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: number to print in binary
 *
 */
void print_binary(unsigned long int n)
{
	int j, read = 0;
	unsigned long int numb;

	for (j = 63; j >= 0; j--)
	{
		numb = n >> j;

		if (numb & 1)
		{
			_putchar('1');
			read++;
		}
		else if (read > 0)
			_putchar('0');
	}
	if (read == 0)
		_putchar('0');
}
