#include "main.h"
#include <stdlib.h>
/**
 * clear_bit - To set the value of a given bit to 0 at a given index
 * @n: change number to pointer
 * @index: index pf the bit to clear
 *
 * Return: -1 for error, 1 for success
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)

		return (-1);

	*n &= ~(1 << index);

	return (1);
}
