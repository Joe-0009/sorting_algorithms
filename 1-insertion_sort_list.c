#include "sort.h"



/**
 * insertion_sort_list - Sorts a doubly linked list of integers
 *                       using the insertion sort algorithm.
 * @list: A pointer to the head of a doubly-linked list of integers.
 *
 * Description: Prints the list after each swap.
 */
void insertion_sort_list(listint_t **list)
{
	int key;
	listint_t *temp, *current;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	current = (*list)->next;

	while (current)
	{
		temp = current->prev;
		key = temp->prev;
		while (temp && temp->n > key)
		{
			temp->next->n = temp->n;
			temp = temp->prev;
			print_list((const listint_t *)*list);
		}

		if (temp == NULL)
			(*list)->n = key;
		else
			temp->next->n = key;

		current = current->next;
	}
}
