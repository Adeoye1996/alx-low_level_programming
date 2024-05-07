#include "search_algos.h"

/**
  * linear_search - Conducts a linear search for a value within an array of integers.
  *            
  * @array: Pointer to the first element of the array to searched.
  * @size: Number of elements in the array.
  * @value: Value being searched for.
  *
  * Return: If the value is not found or the array is NULL, returns -1.
  *         Otherwise, returns the index of the first occurrence of the value.
  *
  * Description: Displays the value at each position in the array as it is checked.
  */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
