#include "main.h"

/**
 * get_endianness - run checks if a machine is little or big endian
 * Return: 1 if little, 0 if big
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
