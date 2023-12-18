#include "sort.h"

/**
 * swap_ints - Swap two integers in an array.
 * @a: The first integer to swap.
 * @b: The second integer to swap.
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * bubble_sort - Sort an array of integers in ascending order.
 * @array: An array of integers to sort.
 * @size: The size of the array.
 *
 * Description: Prints the array after each swap.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i = 0, k;
	int temp;

	if (!array || !size)
		return;

	while (i < size)
	{
		k = 0;
		while (k < size - 1)
		{
			if (array[k] > array[k + 1])
			{
				swap_int(array[k], array[k + 1+]);
				print_array(array, size);
			}
			k++;
		}
	i++;
	}
}