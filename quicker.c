#include <stdio.h>
void quickk_sort(int *array, size_t size);
void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
void print_array(const int *array, size_t size)
{
	size_t i;

	i = 0;
	while (array && i < size)
	{
		if (i > 0)
		printf(", ");
		printf("%d", array[i]);
		++i;
	}
	printf("\n");
}

int partition(int *a, int low, int high)
{
    int pivot = a[high];
    int j = low;
    int i = low -1;

    for (j = low; j < high; j++)
    {
        if (a[j] < pivot)
        {
            i++;
            swap(&a[j], &a[i]);
            print_array(a, high);
        }
    }
    swap(&a[i + 1], &a[high]);
    print_array(a, high);
    return (i + 1);
}

void quicksorter(int *arr,int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        quicksorter(arr, 0, pi - 1);
        quicksorter(arr, pi + 1, high);
    }
}

void quickk_sort(int *array, size_t size)
{
    int high = size;
    int low = 0;
    quicksorter(array, low, high);
}

int main(void)
{
    int a[] = {7, 2, 1, 6, 8, 5,3, 4};
    int p = partition(a, 0, 7);
    printf("my array.............======\n\n");
    quickk_sort(a, 7);
    print_array(a, 7);


}
