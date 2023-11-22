#include "lists.h"

/**
 * free_listint - free space
 *
 * @head: pointer
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
