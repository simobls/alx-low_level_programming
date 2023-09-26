#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */

void free_listint(listint_t *head)
{
	struct node* tmp;

	while (head != NULL)
    {
		tmp = head;
		head = head->next;
		free(tmp);
    }
}