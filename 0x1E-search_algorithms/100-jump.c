#include <math.h>
#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted,
 * array of integers using jump search.
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the array is NULL, -1.
 *         Otherwise, the first index where the value is located.
 *
 * Description: Prints a value every time it is compared in the array.
 *              Uses the square root of the array size as the jump step.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump_step;
	size_t prev = 0;
	size_t jump = 0;
	size_t start;
	size_t end;
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	jump_step = sqrt(size);

	while (jump < size && array[jump] < value)
	{
		printf("Value checked array[%ld] = [%d]\n",
				jump, array[jump]);
		prev = jump;
		jump += jump_step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			prev, jump < size ? jump : size - 1);

	start = prev;
	end = jump < size ? jump : size - 1;

	for (i = start; i <= end; i++)
	{
		printf("Value checked array[%ld] = [%d]\n",
				i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
