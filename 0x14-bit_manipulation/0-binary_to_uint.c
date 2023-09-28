#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: - pointer to a string of 0 and 1 chars
 *
 * Return: converted number or NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;

	if (b == 0)
		return (0);

	while (*b != '\0')
	{
		if (*b == '0')
		{
			number <<= 1;
		}
		else if (*b == '1')
		{
			number = (number << 1) | 1;
		}
		else
		{
			return (0);
		}
		b++;
	}
	return (number);
}
