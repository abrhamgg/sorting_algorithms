#include "sort.h"

/**
 * bubble_sort - fucntion that sort arrays in ascending order using Bubble sort
 * @array: input array
 * @size: size of the array
 * Return: prints the array
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j, k = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (j + 1 == size)
			{
				print_array(array, size);
				continue;
			}
			else
			{
				if (array[j] > array[j + 1])
				{
					k = array[j + 1];
					array[j + 1] = array[j];
					array[j] = k;
					print_array(array, size);
				}
			}
		}
	}
}
