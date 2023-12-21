#include "sort.h"
#include <stdio.h>
#include <stdlib.h>

void swap_node_back_one(listint_t *swap_node)
{
    listint_t temp_node;

    swap_node->prev->next = swap_node->next;
    swap_node->next->prev = swap_node->prev;

    swap_node->prev = swap_node->prev->prev;
    swap_node->prev->prev->next = swap_node;

    return;
}
