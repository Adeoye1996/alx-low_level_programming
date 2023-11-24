#include "main.h"
/**
 * get_endianness - it checks the endianness
 *
 * Return: 1 if little endian, 0 if big endian
 */
int get_endianness(void)
{
	int i;
	char *j;

	i = 1;
	j = (char *)&i;

		return (*j);
}
