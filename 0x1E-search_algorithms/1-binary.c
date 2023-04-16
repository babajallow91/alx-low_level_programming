#include "search_algos.h"

/**
 * print_array - prints an array
 * @array: a pointer to the first element of the array to print
 * @low: the first index to print
 * @high: the last index to print
 */
void print_array(int *array, size_t low, size_t high)
{
	char *sep = "";

	printf("Searching in array: ");
	for (; low <= high; low++)
	{
		printf("%s%d", sep, array[low]);
		sep = ", ";
	}
	printf("\n");
}

/**
 * binary_search - searches for a value in an array of integers using the
 *                 binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the index where value is located, else, -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1;

	if (array == NULL)
		return (-1);

	print_array(array, low, high);
	while (low <= high)
	{
		size_t mid = (low + high) >> 1;

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}

	return (-1);
}
