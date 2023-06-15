#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: double pointer to the beginning of the linked list
 * @idx: index at which to insert the new node
 * @n: data to enter into new node
 *
 * Return: pointer to the new node, or NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *next, *curnt;
	unsigned int y;

	if (h == NULL)
		return (NULL);
	if (idx != 0)
	{
		curnt = *h;
		for (y = 0; y < idx - 1 && curnt != NULL; y++)
			curnt =  curnt->next;
		if (curnt == NULL)
			return (NULL);
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		next = *h;
		*h = new;
		new->prev = NULL;
	}
	else
	{
		new->prev = curnt;
		next = curnt->next;
		curnt->next = new;
	}
	new->next = next;
	if (new->next != NULL)
		new->next->prev = new;
			return (new);
}

