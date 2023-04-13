#include "search_algos.h"


/**
 * linear_search - searches for a given value in an array using linear search algorithm
 * @value: value to be searched
 *
 * This function searches for a given value in the specified array using linear search algorithm,
 * which involves traversing the array in a linear manner from the first element to the last, until
 * the desired value is found or the end of the array is reached.
 *
 * Return: index of the first occurrence of the value in the array, or -1 if the value is not present
 */


int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%li] = [%i]\n", i, array[i]);

		if (array[i] == value)
			return (i);
	}
	return (-1);
}
