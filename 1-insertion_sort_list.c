#include "sort.h"

/**
 * swap_node- Swap two nodes in a double linked list
 * @node: node you want to swap with his previous node.
 * @node_prev: previous node of the node you want to swap places with
 */

void swap_node(listint_t *node, listint_t *node_prev)
{
	listint_t *temp_node;

	if (node == NULL || node_prev == NULL)
		return;
	temp_node = malloc(sizeof(listint_t));
	if (temp_node == NULL)
		return;
	temp_node->next = node->next;
	node->prev = node_prev->prev;
	node->next = node_prev;
	node_prev->prev = node;
	node_prev->next = temp_node->next;
	if (node_prev->next != NULL)
		node_prev->next->prev = node_prev;
	if (node->prev != NULL)
		node->prev->next = node;

	free(temp_node);
}

/**
 * insertion_sort_list- Sorting the integers of an array in ascending numbers.
 * @list: List you want to sort the integers of.
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *node_temp;

	node_temp = (*list);

	if (list == NULL || (*list)->next == NULL)
		return;

	while (node_temp != NULL)
	{
		while (node_temp->prev != NULL && node_temp->n < node_temp->prev->n)
		{
			swap_node(node_temp, node_temp->prev);
			if (node_temp->prev == NULL)
				*list = node_temp;
			print_list(*list);
		}
	node_temp = node_temp->next;
	}
}
