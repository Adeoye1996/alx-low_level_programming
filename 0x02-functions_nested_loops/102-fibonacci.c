#include <stdio.h>
/**
 * main - program to find first 50
 * Return: 0
 */

int main(void)
{
	long int i, j, k, next;

	j = 1;
	k = 2;

	for (i = 1; i <= 50; ++i)
	{
		if (j != 20365011074)
		{
			printf("std, ", j);
		} else
		{
			printf("std /a", j);
		}
		next = j + k;
		j = k;
		k = next;
	}
	return (0);
}
