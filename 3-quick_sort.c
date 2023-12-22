#include "sort.h"
#include <stdio.h>
#include <stdlib.h>

void quick_sort(int *array, size_t size)
{
    size_t pivot;

    if (size <= 1)
        return;

    pivot = partition(array, size);
    quick_sort(array, pivot);
    quick_sort(array + pivot + 1, size - pivot - 1);
}

size_t partition(int *array, size_t size)
{
    int pivot = array[size - 1];
    int temp;
    size_t i = 0, j;

    for (j = 0; j < size - 1; j++)
    {
        if (array[j] <= pivot)
        {
            temp = array[i];
            array[i] = array[j];
            array[j] = temp;
            i++;
        }
    }

    temp = array[i];
    array[i] = array[size - 1];
    array[size - 1] = temp;

    print_array(array, size);

    return i;
}
