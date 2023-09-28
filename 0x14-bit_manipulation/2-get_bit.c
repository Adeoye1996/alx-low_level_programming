#include "main.h"

/**
 * get_bit -let  returns the value of a bit at an index in a decimal num
 * @n: search for number
 * @index: to index of the bit
 *
 * Return: success value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
