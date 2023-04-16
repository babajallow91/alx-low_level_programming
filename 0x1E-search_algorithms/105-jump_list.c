#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted singly linked list of integers
 *             using jump search.
 * @list: A pointer to the head of the linked list to search.
 * @size: The number of nodes in the list.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the head of the list is NULL, NULL.
 *         Otherwise, a pointer to the first node where the value is located.
 *
 * Description: Prints a message every time a value is compared in the list.
 *              Uses the square root of the list size as the jump step.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step, step_size;
	listint_t *current, *jump;

	if (list == NULL || size == 0)
		return NULL;

	step = 0;
	step_size = sqrt(size);

	/* Jump through the list until the value is found or passed */
	for (current = jump = list;
			jump->next != NULL && jump->n < value;
			current = jump, jump = jump->next)
	{
		if ((jump->index + 1) % step_size == 0)
		{
			printf("Value checked at index [%lu] = [%d]\n",
					jump->index, jump->n);
			if (jump->n >= value)
				break;
			step += step_size;
		}
	}

	/* Perform a linear search between the current node and the jump node */
	printf("Value found between indexes [%lu] and [%lu]\n",
			current->index, jump->index);
	for (; current != jump; current = current->next)
	{
		printf("Value checked at index [%lu] = [%d]\n",
				current->index, current->n);
		if (current->n == value)
			return current;
	}

	/* Check the final node */
	printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
	if (current->n == value)
		return current;

	return NULL;
}
