#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

void insertion_sort_list(listint_t **list)
{
    listint_t *tracknode = *list;
    int listlen = getlist_len(*list), i;

    for (i = 0; i <= listlen; i++)
    {
        while (tracknode->n < tracknode->prev->n)
        {
            tracknode = tracknode->next;
        }
        while (tracknode->n > tracknode->prev->n)
        {
            swap_node_back_one(tracknode);
            print_list(*list);
        }
    }
    return();
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
