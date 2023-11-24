#include "main.h"
/**
 * flip_bits - to change the number of bits counted
 * to get from one number to another
 * @n: the first number
 * @m: second number
 *
 * Return: success number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, countbit = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)

	{
		current = exclusive >> i;

		if (current & 1)
			countbit++;
	}

	return (countbit);
}
