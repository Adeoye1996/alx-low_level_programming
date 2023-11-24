#include "main.h"

/**
 * set_bit - let sets bit at a given index to 1
 * @n: the number pointer to change
 * @index: index of the bit to set to 1
 *
 * Return: -1 for failure, 1 for success
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int setbit;

	if (index > (sizeof(unsigned long int) * 8 - 1))

		return (-1);
	setbit = 1 << index;
	*n = *n | setbit;

	return (1);
}
