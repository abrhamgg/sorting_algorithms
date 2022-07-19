#include "sort.h"
#include <stdio.h>

/**
 * swap - swaps the address values of two pointers
 * @ptr_a: pointer to integer
 * @ptr_b: pointer to integer
 *
 * Return: nothing!
 */
void swap(int *ptr_a, int *ptr_b)
{
	int tmp;

	if (!ptr_a || !ptr_b)
		return;

	tmp = *ptr_a;
	*ptr_a = *ptr_b;
	*ptr_b = tmp;
}
/**
 * partition - function that sorts an element using Lomuto algorithm.
 * @a: input
 * @size: size of the array
 * @low: the starting index of the array.
 * @high: the last index.
 * Return: pivot index.
 */
int partition(int *a, size_t size, int low, int high)
{
	int pivot = a[high];
	int j = low;
	int i = low - 1;

	for (j = low; j < high; j++)
	{
		if (a[j] < pivot)
		{
			i++;
			if (a[j] != a[i])
			{
				swap(&a[j], &a[i]);
				print_array(a, size);
			}
		}
	}
	if (a[i + 1] != a[high])
	{
		swap(&a[i + 1], &a[high]);
		print_array(a, size);
	}
	return (i + 1);
}

/**
 * quicksorter - function that recursievly sort an array
 * @arr: input array
 * @low: pivot value
 * @high: size of the array
 * @size: size of the array
 * Return: void
 */
void quicksorter(int *arr, size_t size, int low, int high)
{
	if (low < high)
	{
		int pi = partition(arr, size, low, high);

		quicksorter(arr, size, 0, pi - 1);
		quicksorter(arr, size, pi + 1, high);
	}
}

/**
 * quick_sort - function that sorts an array of int in ascending order.
 * @array: input array.
 * @size: size of the array
 * Return: prints the array in every operation.
 */
void quick_sort(int *array, size_t size)
{
	int high = size - 1;
	int low = 0;

	if (array == NULL || size <= 1)
		return;
	quicksorter(array, size, low, high);
}
