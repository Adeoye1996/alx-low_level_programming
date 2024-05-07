#include "search_algos.h"

/**
 * binary_search - Locates a value in a sorted array
 *                 of integers using binary search.
 * @array: A pointer to the first element of the array to be searched.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: If the value is not found or the array is NULL, -1.
 *         Otherwise, returns the index where the value is located.
 *
 * Description: Displays the array being searched every time it changes.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, i;

	if (array == NULL)
		return (-1);

	while (right >= left)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}

	return (-1);
}
