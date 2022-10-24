#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include "lists.h"

/**
 * print_listint_t: prints all the elements of a listint_t
 *
 * @h: pointer to the first element
 * Return: Number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NUll)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
