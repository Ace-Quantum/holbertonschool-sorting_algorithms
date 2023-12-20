#include "sort.h"
#include <stdio.h>
#include <stdlib.h>

void bubble_sort(int *array, size_t size)
{
    /*listint_t *leadnode, *follownode;
    lol looks like we're not doing linked lists apparantly.*/

    size_t i = 0, j = 0, k = 0;
    int temp;

    while (i < size - 1)
    {
        while (j < size - i - 1)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                for (k = 0; k < size; k++)
                    printf("%d ", array[k]);
                printf("\n");
            }
        }
    }
    
}
