#include "main.h"
/**
 * get_endianness- checks the endianness
 *
 * Return: 0 if big or 1 if little
 */
int get_endianness(void)
{
	unsigned int temp = 1;
	char *h = (char *)&temp;

	return (*h == 1);
}
