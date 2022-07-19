#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7, 5, 6, 7, 58 ,8,8,9 ,96, 97, 123, 76, 75, 87, 87, 98, 54};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);

    printf("\n");
    quick_sort(array, n);
    printf("\n");
    print_array(array, n);
    return (0);
}
