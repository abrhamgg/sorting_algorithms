#include "sort.h"

/**
 * selection_sort - function that sorts an array in ascending order
 * @array: input array.
 * @size: size of the array
 * Return: prints the array in every operation
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j = 0;
	size_t min = 0;
	size_t tmp;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[min] > array[j])
				min = j;
		}
		if (min != i)
		{
			tmp = array[min];
			array[min] = array[i];
			array[i] = tmp;
			print_array(array, size);
		}
	}
}
