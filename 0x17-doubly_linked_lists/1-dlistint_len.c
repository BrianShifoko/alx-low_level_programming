#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements in a linked
 * list_t list
 * @h: h pointer
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t cont = 0;

	while (h != NULL)
	{
		h = h->next;
		cont++;
	}
	return (cont);
}
