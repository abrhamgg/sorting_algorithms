#include "sort.h"
#include <stdio.h>

/**
 * swap - swaps to node
 * @head: the head node
 * @node1: the first node
 * @node2: second node
 * Return: void
 */

void swap(listint_t **head, listint_t *node1, listint_t *node2)
{
	listint_t *prev, *next;

	prev = node1->prev;
	next = node2->next;

	if (prev != NULL)
		prev->next = node2;
	else
		*head = node2;

	node1->prev = node2;
	node1->next = next;
	node2->prev = prev;
	node2->next = node1;
	if (next)
		next->prev = node1;
}
/**
 * insertion_sort_list - function that sorts a doubly
 * linked list of integers in ascending order
 * @list: doubly linked list
 * Return: print sorted list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current = *list;
	listint_t *tmp;

	if (list == NULL || (*list) == NULL || (*list)->next == NULL)
		return;

	while (current != NULL)
	{
		while (current->prev != NULL && current->n < current->prev->n)
		{
			tmp = current->prev;
			swap(list, tmp, current);
			print_list(*list);
		}
		current = current->next;
	}
}
