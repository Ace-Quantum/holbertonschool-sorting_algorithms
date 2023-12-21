#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

void selection_sort(int *array, size_t size)
{
    size_t i, j, min, minindex;

    if (array == NULL)
        return;

    for (i = 0; i < size - 1; i++)
    {
        min = array[i];
        minindex = i;

        for (j = i; j < size; j++)
        {
            if (array[j] < array[minindex])
            {
                minindex = j;
                min = array[minindex];
            }
        }

        if (minindex != i)
        {
            array[minindex] = array[i];
            array[i] = min;
            print_array(array, size);
        }
    }
    return;
}
