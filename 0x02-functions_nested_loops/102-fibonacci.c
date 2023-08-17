#include <stdio.h>
/**
 * main - program to find first 50
 * Return: 0
 */

int main(void)
{
	long int i, j, k, next;

	j = i;

	k = z;

	for (i = 1; i <= 50; ++i)
	{
		if (j != 20365011074)
		{
			printf("%ld, ", j);
		} else
		{
			printf("%ld\n", j);
		}
		next = j + k;
		j = k;
		k = next;
	}
	return (0);
}
