#include "search_algos.h"

/**
 * linear_skip - Searches for a value contained in a skip list.
 *
 * @list: Pointer to the head of the skip list to traverse.
 * @value: Value to search for.
 *
 * Return: Pointer to the first node where the value is located, or NULL if
 *         list is NULL or value not found.
 *
 * Description: Assumes a list with sorted values and a single skip layer with
 *              nodes at every index which is a multiple of the square root of
 *              the size of the list.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *current = NULL, *next = NULL;

	if (!list)
		return (NULL);

	current = list;
	while (current && current->express && current->express->n < value)
	{
		printf("Value checked at index [%lu] = [%d]\n",
		       current->express->index, current->express->n);
		current = current->express;
	}

	next = current->express;
	if (next)
	{
		printf("Value checked at index [%lu] = [%d]\n",
		       next->index, next->n);
		printf("Value found between indexes [%lu] and [%lu]\n",
		       current->index, next->index);
	}
	else
	{
		next = current;
		while (next->next)
			next = next->next;
		printf("Value found between indexes [%lu] and [%lu]\n",
		       current->index, next->index);
	}

	while (current != next && current->n < value)
	{
		printf("Value checked at index [%lu] = [%d]\n",
		       current->index, current->n);
		current = current->next;
	}

	printf("Value checked at index [%lu] = [%d]\n",
	       current->index, current->n);

	if (current->n == value)
		return (current);
	else
		return (NULL);
}
