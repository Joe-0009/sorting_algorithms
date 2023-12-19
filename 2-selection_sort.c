#include "sort.h"

/**
 * selection_sort - Sort an array of integers in ascending order
 *                  using the selection sort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 *
 * Description: Prints the array after each swap.
 */



void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int min;
 
	if (!array || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min = array[i];
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < min)
				min = array[j];

		}
		if ((array[i]) != min)
		{
			swap_int(array[i], array[j]);
			print_array(array, size);
		}
	}

}
