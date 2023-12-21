#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

void selection_sort(int *array, size_t size)
{
    int min, minindex;
    size_t i, j;

    for (i = 0; i < n - 1; i++)
    {
        min = array[i];
        minindex = i;

        for (j = i; j < n; j++)
        {
            if (array[j] < array[minindex])
                minindex = j;
                min = array[minindex];
        }

        if (minindex != i)
        {
            array[minindex] = array[i];
            array[i] = min;
            print_array(array);
        }
    }
    return;
}
