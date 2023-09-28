#include "main.h"

/**
 * clear_bit - To sets the value of a given bit to 0
 * @n: to change number to pointer
 * @index: index of the bit to clear
 *
 * Return: -1 for failure, 1 for success
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
