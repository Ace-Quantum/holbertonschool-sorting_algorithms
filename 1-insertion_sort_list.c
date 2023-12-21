#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

void insertion_sort_list(listint_t **list)
{
    listint_t *tracknode = *list;
    int listlen = getlist_len(*list), i;

    while (tracknode != NULL && tracknode->prev != NULL && tracknode->n < tracknode->prev->n)
    {
        printf("iterating track node\ntracknode value: %d, tracknext value: %d\n", tracknode->n, tracknode->next->n);
        tracknode = tracknode->next;
    }
    while (tracknode != NULL && tracknode->prev != NULL && tracknode->n > tracknode->prev->n)
    {
        swap_node_back_one(tracknode);
        print_list(*list);
    }
    return;
}

int getlist_len(const listint_t *h)
{
	int num_nodes = 0;

	while (h != NULL)
	{
		num_nodes++;
		h = (*h).next;
	}
	return (num_nodes);
}

void swap_node_back_one(listint_t *swap_node)
{
    swap_node->prev->next = swap_node->next;
    swap_node->next->prev = swap_node->prev;

    swap_node->prev = swap_node->prev->prev;
    swap_node->prev->prev->next = swap_node;

    return;
}
