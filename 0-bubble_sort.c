#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * bubble_sort - Sort an array of integers in ascending order.
 * @array: An array of integers to sort.
 * @size: The size of the array.
 *
 * Description: Prints the array after each swap.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i = 0, k = 0;
	int temp;

	if (!array || !size)
		return;

	while (i < size)
	{
		while (k < size - 1)
		{
			if (array[k] > array[k + 1])
			{
				temp = array[k];
				array[k] = array[k + 1];
				array[k + 1] = temp;
				print_array(array, size);
			}
			k++;
		}
	i++;
	}
}
