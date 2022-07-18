#include "sort.h"
#include <stdio.h>

/**
 * swap - function which swaps to integers
 * @n2: input 1
 * @n2: input 2
 * Return: void
 */

void swap(int *array,int n1, int n2)
{
	int temp;

	temp = array[n1];
	array[n1] = array[n2];
	array[n2] = temp;
}

/**
 * partition - function that sorts an element using Lomuto algorithm.
 * @array: input
 * @size: size of the array
 */

int partition(int *array, int low, int high)
{
	int pivot = high;
	int j = low;
	int i = -1;
	size_t tmp;

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] > array[pivot])
		{
			i++;
			swap(array, array[i], array[j]);
		}
	}
	swap(array, array[i + 1], array[pivot]);
	return (i);
}

/**
 * quick_sort - function that sorts an array of int in ascending order.
 * @array: input array.
 * @size: size of the array
 * Return: prints the array in every operation.
 */

void quick_sort(int *array, size_t size)
{
	size_t high = size - 1;
	int low = 0;

	int pi = partition(array, low, high);
	printf("%i\n", array[pi]);


}
