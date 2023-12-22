#include "sort.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void quick_sort(int *array, size_t size)
{
    int high = size - 1, low = 0;

    sort(array, low, high, size);
}

void sort(int *array, int low, int high, size_t size)
{
    int indx;

    if (low < high)
    {
        indx = partition(array, low, high, size);

        sort(array, low, indx - 1, size);
        sort(array, indx +1, high, size);
    }
}

size_t partition(int *array, int low, int high, size_t size)
{
    int pivot = array[high];
    int temp;
    int i = (low - 1);
    int j;

    for (j = 0; j < high + 1; j++)
    {
        if (array[j] <= pivot)
        {
            i++;
            temp = array[i];
            array[i] = array[j];
            array[j] = temp;
        }
    }

    if (array[high] != array[i + 1])
    {
        temp = array[high];
        array[high] = array[i + 1];
        array[i + 1] = temp;
        print_array(array, size);
    }

    return (i + 1);
}
