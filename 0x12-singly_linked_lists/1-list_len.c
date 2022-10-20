#include "lists.h"

/**
*list_len - number of elements of list_t
*@h: head
*
*Return: number of elemets
*/
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
	count++;
	h = h->next;
	}
	return (count);
}
