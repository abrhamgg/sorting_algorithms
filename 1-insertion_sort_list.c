#include "sort.h"

/**
 * insertion_sort_list - function that sorts a doubly linked list of integers in ascending order
 * @list: doubly linked list
 * Return: print sorted list 
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current = *list;
	listint_t *tmp = malloc(sizeof(listint_t));

	while (current != NULL)
	{
		if (current->n < current->prev->n && current->prev != NULL)
		{	
			tmp = current->prev;
			current->prev->next->next = current->next;
			current->next->prev = current->prev;
			current->prev = current->prev->prev;
			current->next = tmp;
			tmp->prev->next = current;
			tmp->prev = current;
			print_list(*list);
			current = current->prev;
		}
		else
		{
			current = current->next;
		}
	}
}
