#include "sort.h"

/**
 * swap_int - Swap two integers in an array.
 * @array: the integer array to sort
 * @size: the size of the array
 * @a: The first integer to swap.
 * @b: The second integer to swap.
 */
void swap_int(int *array, size_t size, int *a, int *b)
{
	int tmp;

	if (*a != *b)
	{
		tmp = *a;
		*a = *b;
		*b = tmp;
		print_array((const int *)array, size);
	}
}

/**
 * lomuto_partition - partitions the array
 *
 * @array: the array of integers to sort
 * @size: the zize of the array
 * @low: the loz index of the sort range
 * @high: the high indew of sort array
 *
 * Return: void
 */
size_t lomuto_partition(int *array, size_t size, ssize_t low, ssize_t high)
{
	int i, j, pivot = array[high];

	for (i = j = low; j < high; j++)
	{
		if (array[j] < pivot)
		{
			swap_int(array, size, &array[j], &array[i++]);
		}
	}
	swap_int(array, size, &array[i], &array[high]);
	return (i);
}

/**
 * quicksort - quiclsorts via lomuto partition scheme
 * @array: the integer array to sort
 * @size: the size of the array
 * @low: the low index
 * @high: the hight index
 *
 * Return: void
 */
void quicksort(int *array, size_t size, ssize_t low, ssize_t high)
{
	size_t p;

	if (low < high)
	{
		p = lomuto_partition(array, size, low, high);

		quicksort(array, size, low, p - 1);
		quicksort(array, size, p + 1, high);
	}
}


/**
 * quick_sort - calls quicksort
 *
 * @array: the integer array to sort
 * @size: the size of the array
 *
 * Return: void
 */

void quick_sort(int *array, size_t size)
{
	if (!array || !size)
		return;

	quicksort(array, size, 0, size - 1);

}

