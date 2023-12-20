#include "sort.h"
#include <stdio.h>
#include <stdlib.h>

void swap_node(listint_t *swap_node1, listint_t *swap_node2)
{
    listint_t temp_node;

    temp_node = swap_node1;
    swap_node1 = swap_node2;
    swap_node2 = temp_node;

    return;
}
