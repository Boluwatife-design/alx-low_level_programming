#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_dlistint-prints all the element of a distint_t list
 * @h: pointer to the head of nodes
 * Return: Number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t node_count = 0;

	while h != NULL
	{
		printf("%d\n", h->n);
		h = h->next;
		node_count++;
	}
	return (node_count);
}
