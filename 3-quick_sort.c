#include "sort.h"
#include <stdio.h>

/**
 * partition - function that sorts an element using Lomuto algorithm.
 * @array: input
 * @size: size of the array
 */

int partition(int *array, int low, int high)
{
	int pivot = array[high];
	int j;
	int i = -1;
	int tmp;

	for (j = low; j <= high; j++)
	{
		if (array[j] >= pivot)
		{
			i++;
			tmp = array[i];
			printf("%i....\n", tmp);
			array[i] = array[j];
			array[j] = tmp;
			printf("%i %i....\n", array[i], array[j]);
			print_array(array, high);
		}
	}
	printf("%i......\n",pivot);
	tmp = array[high];
	array[high] = array[i + 1];
	array[i + 1] = tmp;
	print_array(array, high);
	return (i);
}


/**
 * recursive_sort - function that recursievly sort an array
 * @index: pivot value
 * @size: size of the array
 * Return: void
 */
void recursive_sort(int *array, int low, int r_size)
{
	int pivot;

	pivot = partition(array, low, r_size);

	recursive_sort(array, 0, pivot - 1);
	recursive_sort(array, pivot + 1, r_size);
}

/**
 * quick_sort - function that sorts an array of int in ascending order.
 * @array: input array.
 * @size: size of the array
 * Return: prints the array in every operation.
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size <= 1)
		return;
	recursive_sort(array, 0, size - 1);
}
